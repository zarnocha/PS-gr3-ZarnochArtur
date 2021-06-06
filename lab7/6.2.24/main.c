#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napisz funkcjê, która dostaje jako argumenty dwuwymiarow¹ tablicê
tablic o elementach typu int oraz jej wymiary, i zmienia kolejnoœæ
kolumn w tablicy w taki sposób, ¿e kolumna pierwsza ma siê znaleŸæ
na miejscu drugiej, kolumna druga ma siê znaleŸæ na miejscu trzeciej
itd., natomiast ostatnia kolumna ma siê znaleŸæ na miejscu pierwszej
(przyjmujemy, ¿e dwa elementy tablicy le¿¹ w tej samej kolumnie,
je¿eli maj¹ tak¹ sam¹ drug¹ wspó³rzêdn¹).
*/

void wypelnianie(int **tablica, int n, int m);

void wypisywanie(int **tablica, int n, int m);

void fcja(int **tablica, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        int tmp = tablica[i][m-1];
        for(int j=m-1; j>=0; j--)
        {
            tablica[i][j+1] = tablica[i][j];
        }
        tablica[i][0] = tmp;
    }
}


int main()
{
    int n = 3;          //1-wszy wymiar
    int m = 3;          //2-gi wymiar
    int **tablica;      //tablica tablic

    tablica = malloc(n* sizeof(int*));

    for(int i=0; i<n; i++)
    {
        tablica[i] = malloc(m * sizeof(int));
    }

    wypelnianie(tablica, n, m);

    wypisywanie(tablica, n, m);

    fcja(tablica,n,m);

    wypisywanie(tablica, n, m);

    return 0;
}

void wypisywanie(int **tablica, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void wypelnianie(int **tablica, int n, int m)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tablica[i][j] = 1+ rand() % 3;
        }
    }
}
