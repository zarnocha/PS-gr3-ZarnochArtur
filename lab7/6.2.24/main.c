#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napisz funkcj�, kt�ra dostaje jako argumenty dwuwymiarow� tablic�
tablic o elementach typu int oraz jej wymiary, i zmienia kolejno��
kolumn w tablicy w taki spos�b, �e kolumna pierwsza ma si� znale��
na miejscu drugiej, kolumna druga ma si� znale�� na miejscu trzeciej
itd., natomiast ostatnia kolumna ma si� znale�� na miejscu pierwszej
(przyjmujemy, �e dwa elementy tablicy le�� w tej samej kolumnie,
je�eli maj� tak� sam� drug� wsp�rz�dn�).
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
