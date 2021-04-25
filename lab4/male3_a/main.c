#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypisz(const short tab[], int n);
void generuj(short tab[], int n);
int ileDodatnich(const short tab[], int n);
int ileUjemnych(const short tab[], int n);
int ileZerowych(const short tab[], int n);

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
    generuj(tab, n);
    wypisz(tab, n);
    int ujemne = ileUjemnych(tab, n);
    int zerowe = ileZerowych(tab, n);
    int dodatnie = ileDodatnich(tab, n);
    printf("\nIlosc dodatnich: %d\nIlosc zerowych: %d\nIlosc ujemnych: %d\n",dodatnie, zerowe, ujemne);

    return 0;
}

void generuj(short tab[], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        tab[i] = rand() % (99 - (-99) + 1)+ (-99);
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

int ileDodatnich(const short tab[], int n)
{
    int ilosc = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] > 0)
        {
            ilosc++;
        }
    }
    return ilosc;
}

int ileUjemnych(const short tab[], int n)
{
    int ilosc = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] < 0)
        {
            ilosc++;
        }
    }
    return ilosc;
}

int ileZerowych(const short tab[], int n)
{
    int ilosc = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] == 0)
        {
            ilosc++;
        }
    }
    return ilosc;
}

