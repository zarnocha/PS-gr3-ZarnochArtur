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

        float a;
        float b;
        float c;

        printf("\nProsze podac pierwszy bok trojkata: ");
        scanf("%f", &a);
        printf("\nProsze podac drugi bok trojkata: ");
        scanf("%f", &b);
        printf("\nProsze podac trzeci bok trojkata: ");
        scanf("%f", &c);

        float najdluzszy;
        //Aby z trzech odcink�w zbudowa� tr�jk�t, najd�u�szy z nich musi by� kr�tszy ni� suma d�ugo�� dw�ch pozosta�ych.
        if(a>b && a>c)
        {
            najdluzszy = a;
        }
        else if(b > a && b > c)
        {
            najdluzszy = b;
        }
        else if(c > a && c > b)
        {
            najdluzszy = c;
        }
        if(najdluzszy == a && najdluzszy > b+c)
        {
            printf("\nTen trojkat nie istnieje. \n");
            return 0;
        }
        else if(najdluzszy == b && najdluzszy > a+c)
        {
            printf("\nTen trojkat nie istnieje. \n");
            return 0;
        }
        else if(najdluzszy == c && najdluzszy > a+b)
        {
            printf("\nTen trojkat nie istnieje. \n");
            return 0;
        }

        float p = ((a+b+c)/2);
        float pole_p = (p*((p-a)*(p-b)*(p-c)));
        float pole = (sqrt(pole_p));
        printf("\nPole: %f", pole);
    }

    else if (odpowiedz != 1 && odpowiedz != 2)
    {
        printf("Brak odpowiedzi.\n");
        return 0;
    }
    return 0;
}
