#include <stdio.h>
#include <math.h>

/* Napisz program, który wczytuje ze standardowego wejścia współczynniki równania kwadratowego
 * z jedną niewiadomą i wypisuje na standardowym wyjściu wszystkie
 * rozwiązania rzeczywiste tego równania lub odpowiednią informację w przypadku braku rozwiązań.*/

float delta(float a, float b, float c)
{
    float wynik = (b*b) - (4*a*c);
    return wynik;
}

int main()
{
    float a; float b; float c;
    float wynik_delty;
    printf("Podaj wspolczynnik dla x^2: ");
    scanf_s("%f",&a);
    printf("Podaj wspolczynnik dla x: ");
    scanf_s("%f",&b);
    printf("Podaj wspolczynnik wyrazu wolnego: ");
    scanf_s("%f",&c);

    wynik_delty = delta(a,b,c);

    if(wynik_delty<0)
    {
        printf("Brak miejsc zerowych.");
    }
    else if(wynik_delty==0)
    {
        float x0 = (-b)/(2*a);
        printf("Miejsce zerowe tej funkcji to: %0.1f",x0);
    }
    else
    {
        float pierwiastek = sqrt(wynik_delty);
        float x1 = ((-b) - pierwiastek)/(2*a);
        float x2 = ((-b) + pierwiastek)/(2*a);
        printf("Miejsca zerowe tej funkcji to: x_1 = %0.1f oraz x_2 = %0.1f",x1,x2);
    }

    return 0;
}
