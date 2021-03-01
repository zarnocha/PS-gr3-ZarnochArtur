#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Napisz program obliczaj�cy pole tr�jk�ta na podstawie wymiar�w
podanych przez u�ytkownika. U�ytkownik powinien mie� mo�liwo��
podania d�ugo�ci podstawy i wysoko�ci lub wszystkich bok�w tr�jk�ta.
*/
int main()
{
    int odpowiedz;
    printf("Jesli chcesz obliczyc pole trojkata z jego podstawy oraz wysokosci wpisz 1.\n");
    printf("Jesli chcesz obliczyc pole trojkata z jego bokow wpisz 2.\n");
    printf("Odpowiedz: ");
    scanf("%d", &odpowiedz);
    if(odpowiedz == 1)
    {
        int podstawa;
        int wysokosc;
        printf("\nProsze podac dlugosc podstawy trojkata: ");
        scanf("%d", &podstawa);
        printf("Prosze podac wysokosc trojkata: ");
        scanf("%d", &wysokosc);
        int pole = (podstawa*wysokosc)/2;
        printf("Pole tego trojkata wynosi: %d", pole);
    }
    else if(odpowiedz == 2)
    {
        int bok1;
        int bok2;
        int bok3;
        printf("\nProsze podac pierwszy bok trojkata: ");
        scanf("%d", &bok1);
        printf("\nProsze podac drugi bok trojkata: ");
        scanf("%d", &bok2);
        printf("\nProsze podac trzeci bok trojkata: ");
        scanf("%d", &bok3);
        int polowa_obwodu = (bok1+bok2+bok3)/2;
        int pole_do_pierw = polowa_obwodu*(polowa_obwodu-bok1)*(polowa_obwodu-bok2)*(polowa_obwodu-bok3);
        float pole = sqrt(pole_do_pierw);
        printf("\nPole tego trojkata wynosi: %0.1f\n", pole);
    }
    else if (odpowiedz != 1 && odpowiedz != 2)
    {
        printf("Brak odpowiedzi.\n");
        return 0;
    }
    return 0;
}
