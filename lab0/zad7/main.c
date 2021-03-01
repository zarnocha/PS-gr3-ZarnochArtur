#include <stdio.h>
#include <stdlib.h>
//Napisz program, który wczytuje ze standardowego wejœcia liczbê
//ca³kowit¹ i wypisuje na standardowym wyjœciu liczbê o jeden wiêksz¹.

int main()
{
    int numer;
    printf("Prosze podac liczbe calkowita: ");
    scanf("%d",&numer);
    printf("Liczba o jeden wieksza to: %d", ++numer);
    return 0;
}
