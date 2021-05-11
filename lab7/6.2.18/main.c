#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napisz funkcj�, kt�ra dostaje jako argument dwuwymiarow� tablic�
tablic o elementach typu int oraz jej wymiary, i wypisuje jej zawarto��
na standardowym wyj�ciu w taki spos�b, �eby kolejne wiersze tablicy zosta�y
wypisane w oddzielnych wierszach standardowego wyj�cia
*/

void wypelnianie(int **tablica, int n, int m);

void wypisywanie(int **tablica, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        printf("%d -> ", i);
        for(int j=0; j<m; j++)
        {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int n = 3;          //1-wszy wymiar
    int m = 3;          //2-gi wymiar
    int **tablica;    //tablica tablic

    tablica = malloc(n* sizeof(int*));

    for(int i=0; i<n; i++)
    {
        tablica[i] = malloc(m * sizeof(int));
    }
    wypelnianie(tablica, n, m);
    wypisywanie(tablica, n, m);

    return 0;
}


void wypelnianie(int **tablica, int n, int m)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tablica[i][j] = rand() % 2;
        }
    }
}

