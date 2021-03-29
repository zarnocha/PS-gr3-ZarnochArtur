#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short lim);
int ileMaksymalnych(const short tab[], int n);
void wypisz(const short tab[], int n);

int main()
{
    const int N = 1000;
    printf("Podaj liczbe z przedzialu 1 do %d: ", N);
    int n;
    scanf("%d", &n);

    short limit = 100;
    short tab[N];

    generuj(tab, n, limit);
    wypisz(tab, n);

    printf("Ilosc maksymalnych liczb wynosi: %d", ileMaksymalnych(tab, n));

    return 0;
}

void generuj(short tab[], int n, short limit)
{
    // inicjalizacja generatora liczb pseudolosowych
    srand(time(0));
    for (int j = 0; j < n; ++j)
    {
        tab[j] = rand() % limit + 1;
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

int ileMaksymalnych(const short tab[], int n)
{
    int najwieksza = tab[0];
    int ilosc = 0;

    for(int i = 1; i<n; i++)
    {
        if(najwieksza < tab[i])
        {
            najwieksza = tab[i];
        }
    }

    for(int i = 0; i<n; i++)
    {
        if(tab[i] == najwieksza)
        {
            ilosc++;
        }
    }
    return ilosc;
}
