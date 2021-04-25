#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wyswietl(short tab[], int n);
void generuj(short tab[], int n);

int ileMaksymalnych(const short tab[], int n);

int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > N )
    {
        printf("Liczba elementow musi byc z przedzialu [1, %d]!", N);
        return 1;
    }

    generuj(tab, n);
    printf("\n");
    wyswietl(tab, n);

    // znajdzie w tablicy element najwiêkszy oraz obliczy ile razy wystêpuje on w tablicy:
    int iloscWystapien = ileMaksymalnych(tab, n);
    printf("Najwiekszy element wystapil %d razy.", iloscWystapien);
    return 0;
}

void wyswietl(short tab[], int n)
{
    int i = 0;
    // Wypisuje n poczatkowych elementów tablicy
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%d. %5d \n", i,*p);
        i++;
    }
    printf("\n");
}

void generuj(short tab[], int n)
{
    short lim = 999;
    srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
    for (short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % lim + 1;
    }
}

int ileMaksymalnych(const short tab[], int n)
{
    short najwiekszy = tab;
    for (short *p = tab; p< tab+n; ++p) //wyszukiwanie najwiekszego elementu tablicy
    {
        if(najwiekszy < *p)
        {
            najwiekszy = *p;
        }
    }

    int wystepowanie = 0;
    for (short *p = tab; p< tab+n; ++p) //obliczanie ilosci wystapien najwiekszego elementu
    {
        if(*p == najwiekszy)
        {
            wystepowanie++;
        }
    }
    return wystepowanie;
}
