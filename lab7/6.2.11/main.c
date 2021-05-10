#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napisz funkcj�, kt�ra dostaje w argumentach tablic� dwuwymiarow�
element�w typu int,
o pierwszym wymiarze podanym jako drugi argument funkcji oraz drugim wymiarze r�wnym 100,
kt�ra to funkcja
zwraca jako warto�� sum� warto�ci element�w tablicy.
*/

int sumawartosci(int tablica[][100], int n)
{
    int suma = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            suma += tablica[i][j];
        }
    }
    return suma;
}
void wypelnianie(int tablica[][100], int n);

int main()
{
    int n = 10;
    int tablica[n][100];

    wypelnianie(tablica, n);

    int suma = sumawartosci(tablica, n);
    printf("Suma wartosci tablicy: %d", suma);

    return 0;
}

void wypelnianie(int tablica[][100], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            tablica[i][j] = -100 + rand() %(100 + 100 + 1);
        }
    }
}
