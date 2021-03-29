#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short lim);
void wypisz(const short tab[], int n);

void zmien(short tab[], int n);
void signum(short tab[], int n);

int main()
{
    const int N = 1000;
    short limit = 100;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > N)
    {
        printf("Liczba elementow musi byc z przedzialu [1, %d\n]!", N);
        return 1;
    }
    generuj(tab, n, 100);
    printf("Tablica przed ogolna zmiana: \n");
    wypisz(tab, n);

    zmien(tab, n);

    printf("Tablica po 1. zmianie: \n");
    wypisz(tab, n);

    signum(tab, n);

    printf("Tablica po 2. zmianie: \n");
    wypisz(tab, n);
    return 0;
}

void wypisz(const short tab[], int n)
{
    for (int j = 0; j < n; ++j)
    {
        printf("%5d ", tab[j]);
    }
    printf("\n");
}

void generuj(short tab[], int n, short lim)
{
// inicjalizacja generatora liczb pseudolosowych
    srand(time(0));
    for (int j = 0; j < n; ++j)
    {
        tab[j] = rand() % lim + 1;
    }
}

void zmien(short tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i] % 2 != 0)
        {
            tab[i] *= 2;
        }

        else if(tab[i] % 2 == 0)
        {
            tab[i] *= -1;
        }
    }
}

void signum(short tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i] > 0)
        {
            tab[i] = 1;
        }
        else if(tab[i] < 0)
        {
            tab[i] = -1;
        }
    }
}

