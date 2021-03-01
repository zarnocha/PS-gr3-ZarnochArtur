#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, kt�ry wczytuje ze standardowego wej�cia wsp�czynniki
uk�adu dw�ch r�wna� liniowych z dwiema niewiadomymi
i wypisuje na standardowym wyj�ciu rozwi�zanie uk�adu r�wna�.
W przypadku niesko�czonej liczby lub braku rozwi�za� program
powinien wypisa� na standardowym wyj�ciu odpowiedni� informacj�.
*/

float wyznacznik(float a, float b, float c, float d)
{
    float wynik = a * b - (c * d);
    return wynik;
}

int main()
{
    float a;
    float b;
    float wynik1;
    float c;
    float d;
    float wynik2;

    printf("Podaj x z pierwszego: ");
    scanf("%f", &a);
    printf("Podaj y z pierwszego: ");
    scanf("%f", &b);
    printf("Podaj wynik z pierwszego: ");
    scanf("%f", &wynik1);

    printf("\nPodaj x z drugiego: ");
    scanf("%f", &c);
    printf("Podaj y z drugiego: ");
    scanf("%f", &d);
    printf("Podaj wynik z drugiego: ");
    scanf("%f", &wynik2);

    printf("\n{%0.1fx + %0.1fy = %0.1f", a, b, wynik1);
    printf("\n{%0.1fx + %0.1fy = %0.1f\n", c, d, wynik2);

    float w = wyznacznik(a, d, c, b);
    float wx = wyznacznik(wynik1, d, b, wynik2);
    float wy = wyznacznik(a, wynik2, wynik1, c);
    float wynik_x;
    float wynik_y;
    wynik_x = wx / w;
    wynik_y = wy / w;
    if (w != 0)
    {
        printf("\nx wynosi: %0.1f\n", wynik_x);
        printf("y wynosi: %0.1f\n", wynik_y);
    }
    else if (w == 0 && wx != 0 && wy != 0)
    {
        printf("\nUklad jest sprzeczny.\n");
    }
    else if (w == 0 && wx == 0 && wy == 0)
    {
        printf("\nUklad jest nieoznaczony.\n");
    }
    return 0;
}
