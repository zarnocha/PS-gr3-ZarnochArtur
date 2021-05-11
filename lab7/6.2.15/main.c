#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napisz funkcjê, która dostaje w argumentach dodatni¹ liczbê ca³kowit¹ n
 oraz tablicê trójwymiarow¹ o elementach typu int o wymiarach
n × 100 × 100, i zwraca jako wartoœæ sumê wartoœci elementów otrzymanej tablicy.
*/
void wypelnianie(int n, int tablica[n][100][100]);

int sumaElementow(int n, int tablica[n][100][100])
{
    int suma = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            for(int k=0; k<100; k++)
            {
               suma += tablica[i][j][k];
            }
        }
    }
    return suma;
}


int main()
{
    int n = 50; //dodatnia liczba ca³kowita "n"
    if(n<0)
    {
        printf("Zle n.");
        return 1;
    }

    int tablica[n][100][100];

    wypelnianie(n, tablica);

    int wynik = sumaElementow(n, tablica);
    printf("Suma el. tablicy wynosi %d", wynik);

    return 0;
}

void wypelnianie(int n, int tablica[n][100][100])
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            for(int k=0; k<100; k++)
            {
               tablica[i][j][k] = -100 + rand() %(100 + 100 + 1);
            }
        }
    }
}
