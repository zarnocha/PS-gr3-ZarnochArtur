#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wyswietl(short tab[], int n);
void generuj(short tab[], int n, short minWartosc, short maxWartosc);

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
    int minWartosc;
    int maxWartosc;
    printf("Podaj minimalna wartosc: ");
    scanf("%d", &minWartosc);
    printf("Podaj maksymalna wartosc: ");
    scanf("%d", &maxWartosc);
    generuj(tab, n, minWartosc, maxWartosc);
    wyswietl(tab, n);

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

void generuj(short tab[], int n, short minWartosc, short maxWartosc)
{
    srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
    for (short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % (maxWartosc-minWartosc+ 1) + minWartosc;
    }
}
