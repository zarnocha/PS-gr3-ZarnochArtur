#include <stdio.h>
#include <stdlib.h>

//Napisz program, kt�ry wczytuje ze standardowego wej�cia
//liczb� wymiern� i wypisuje j� na standardowym wyj�ciu z dok�adno�ci�
//do dw�ch miejsc po przecinku.

int main()
{
    float liczba;
    printf("Podaj liczbe wymierna: ");
    scanf("%f", &liczba);
    printf("Liczba wymierna z dokl. do 2-ch miejsc po przecinku: %.2f\n", liczba);

    return 0;
}
