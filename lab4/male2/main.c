#include <stdio.h>
#include <stdlib.h>

void generuj(short tab[], int n, short minWartosc, short maxWartosc);
void wypisz(const short tab[], int n);

int main()
{
    const int N = 1000;
    short tab[N];
    int n;
    printf("Ilosc elementow w tablicy: ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Liczba ponizej 1.");
        return 1;
    }
    int maxWartosc; int minWartosc;
    printf("Podaj minimalna wartosc: ");
    scanf("%d", &minWartosc);
    printf("Podaj maksymalna wartosc: ");
    scanf("%d", &maxWartosc);
    generuj(tab, n, minWartosc, maxWartosc);
    wypisz(tab, n);

    return 0;
}

void generuj(short tab[], int n, short minWartosc, short maxWartosc)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        tab[i] = rand() % (maxWartosc - minWartosc + 1)+ minWartosc;
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

