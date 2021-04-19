#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wyswietl(short tab[], int n)
{
    // Wypisuje n pocz �atkowych element�w tablicy
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }
    printf("\n");

}

void zamien(short tab[], int n)
{
    for (short *p = tab; p < tab + n; ++p)
    {
        if(*p % 2 != 0)
        {
            *p *= 2;
        }
        else if(*p % 2 == 0)
        {
            *p *= -1;
        }
    }
    for (short *p = tab; p < tab + n; ++p)
    {
        if(*p > 0)
        {
            *p = 1;
        }
        else if(*p < 0)
        {
            *p = -1;
        }
    }
}

int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > N)
    {
        printf("Liczba element�w musi by�c z przedzia�u [1, %d\n]!", N);
        return 1;
    }

    // Inicjalizuje n poczatkowych element�w tablicy
    // liczbami o wartosciach z przedzia�u [1..lim]
    short lim = 999;
    srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
    for (short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % lim + 1;
    }

    wyswietl(tab, n);
    zamien(tab, n);
    wyswietl(tab, n);

    return 0;
}
