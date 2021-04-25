#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n);
void wypisz(const short tab[], int n);
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n);

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
    int dlugosc = dlugoscMaksymalnegoCiaguDodatnich(tab, n);
    printf("Dlugosc maksymalna ciagu dodatnich wynosi %d", dlugosc);
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

int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n)
{
    int najwiekszy; int najwiekszy_old = 0; int najwiekszy_new = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] > 0)
        {
            najwiekszy_new++;
        }

        else if(tab[i] <= 0)
        {
            if(najwiekszy_new>najwiekszy_old)
            {
                najwiekszy_old = najwiekszy_new;
            }
        }
    }

    return najwiekszy_old;

}
















        /*int najwiekszy_new; int najwiekszy_old;
        najwiekszy_old = 0;
        while(tab[i] > 0)
        {
            najwiekszy_new++;
        }*/
