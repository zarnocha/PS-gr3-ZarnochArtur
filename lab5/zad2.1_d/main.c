#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wyswietl(short tab[], int n);
void generuj(short tab[], int n);

int ileNieparzystych(const short tab[], int n);
int ileParzystych(const short tab[], int n);

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

    // obliczy iloœæ nieparzystych oraz parzystych elementów tablicy:

    int iloscNieparzystych = ileNieparzystych(tab, n);
    int iloscParzystych    = ileParzystych(tab, n);

    printf("Ilosc nieparzystych el. tablicy: %3d\n", iloscNieparzystych);
    printf("Ilosc parzystych el. tablicy: %5d\n", iloscParzystych);

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

int ileNieparzystych(const short tab[], int n)
{
    int nieparzyste = 0;
    for (short *p = tab; p < tab + n; ++p)
    {
        if(*p % 2 != 0)
        {
            nieparzyste++;
        }
    }
    return nieparzyste;
}

int ileParzystych(const short tab[], int n)
{
    int parzyste = 0;
    for (short *p = tab; p < tab + n; ++p)
    {
            if(*p % 2 == 0)
        {
            parzyste++;
        }
    }
    return parzyste;
}
