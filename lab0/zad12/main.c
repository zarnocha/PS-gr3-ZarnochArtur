#include <stdio.h>
#include <stdlib.h>
//Napisz program, który wczytuje ze standardowego wejœcia liczbê wymiern¹
//i wypisuje j¹ na standardowym wyjœciu w notacji wyk³adniczej (czyli takiej, w której 0.2 to 2.0e-1)
int main()
{
    float liczba;
    printf("Prosze podac liczbe wymierna: ");
    scanf("%f", &liczba);
    printf("Notacja wykladnicza z %0.1f to %0.1e",liczba,liczba);
    return 0;
}
