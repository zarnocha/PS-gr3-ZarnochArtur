#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short lim);
int ileNieparzystych(const short tab[], int n);
int ileParzystych(const short tab[], int n);
void wypisz(const short tab[], int n);

int main()
{
    const int N = 1000;
    printf("Podaj liczbe z przedzialu 1 do %d: ", N);
    int n;
    scanf("%d", &n);

    short limit = 100;
    short tab[N];

    generuj(tab, n, 100);
    wypisz(tab, n);
    printf("Ilosc nieparz. element. tablicy: %d\nIlosc parzyst. element. tablicy: %d", ileNieparzystych(tab, n), ileParzystych(tab, n));

    return 0;
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

void wypisz(const short tab[], int n)
{
    for (int j = 0; j < n; ++j)
    {
        printf("%5d ", tab[j]);
    }
    printf("\n");
}

int ileNieparzystych(const short tab[], int n)
{
    int ilosc = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] % 2 != 0)
        {
            ilosc++;
        }
    }

    return ilosc;
}

int ileParzystych(const short tab[], int n)
{
    int ilosc = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] % 2 == 0)
        {
            ilosc++;
        }
    }

    return ilosc;
}
