#include <stdio.h>
#include <stdlib.h>

//Napisz program, który wczytuje ze standardowego wejœcia
//liczbê wymiern¹ i wypisuje j¹ na standardowym wyjœciu z dok³adnoœci¹
//do dwóch miejsc po przecinku.

int main()
{
    float liczba;
    printf("Podaj liczbe wymierna: ");
    scanf("%f", &liczba);
    printf("Liczba wymierna z dokl. do 2-ch miejsc po przecinku: %.2f\n", liczba);

    return 0;
}
