#include <stdio.h>
#include <stdlib.h>
//Napisz program, kt�ry wczytuje ze standardowego wej�cia liczb� wymiern�
//i wypisuje j� na standardowym wyj�ciu w notacji wyk�adniczej (czyli takiej, w kt�rej 0.2 to 2.0e-1)
int main()
{
    float liczba;
    printf("Prosze podac liczbe wymierna: ");
    scanf("%f", &liczba);
    printf("Notacja wykladnicza z %0.1f to %0.1e",liczba,liczba);
    return 0;
}
