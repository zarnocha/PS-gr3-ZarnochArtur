#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short lim);
void wypisz(const short tab[], int n);
void collatz(short tab[], int n);


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
    printf("Tablica przed zmiana: \n");
    wypisz(tab, n);
    collatz(tab, n);
    printf("Tablica po zmianie: \n");
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

void collatz(short tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i] % 2 != 0 && tab[i] > 0)
        {
            tab[i] = 3*tab[i] +1;
        }

        else if(tab[i] % 2 == 0 && tab[i] > 0)
        {
            int j = tab[i]/2;
            if(tab[i] % j == 0)
            {
                tab[i] = j;
            }
            else
            {
                j--;
            }
        }
    }
}
