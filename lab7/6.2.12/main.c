#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napisz funkcjê, która dostaje w argumentach dwuwymiarow¹ tablicê
tablic o elementach typu int oraz jej wymiary n i m, i zwraca jako
wartoœæ sumê wartoœci elementów tablicy.
*/

void wypelnianie(int n, int m, int tablica[][m]);

int sumawartosci(int n, int m, int tablica[][m])
{
    int suma = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            suma += tablica[i][j];
        }
    }
    return suma;
}

int main()
{
    int n, m;
    printf("Podaj n i m: ");
    scanf("%d %d", &n, &m);

    int tablica[n][m];
    wypelnianie(n, m, tablica);

    int suma = sumawartosci(n, m, tablica);
    printf("\nSuma wartosci tablicy: %d", suma);

    return 0;
}

void wypelnianie(int n, int m, int tablica[][m])
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tablica[i][j] = -100 + rand() %(100 + 100 + 1);
        }
    }
}
