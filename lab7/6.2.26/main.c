#include <stdio.h>
#include <stdlib.h>

/*
Napisz funkcjê, która dostaje jako argumenty dwuwymiarow¹ prostok¹tn¹ tablicê tablic
tab1 o wymiarach n × m i elementach typu int
oraz jej wymiary, i zwraca jako wartoœæ wskaŸnik do nowo utworzonej
dwuwymiarowej tablicy tablic tab2 o wymiarach m × n zawieraj¹cej
transponowan¹ macierz przechowywan¹ w tablicy tab1 (czyli dla dowolnych k i j zachodzi tab1[k][j]=tab2[j][k].
*/

void fcja(int **tablica, int n, int m)
{

}

void wypelnianie(int **tablica, int n, int m);

void wypisywanie(int **tablica, int n, int m);


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
        printf("%d -> ", i);
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
