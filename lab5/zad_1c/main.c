#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wyswietl(short tab[], int n)
{
    // Wypisuje n pocz ²atkowych elementów tablicy
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }
    printf("\n");

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
        printf("Liczba elementów musi by´c z przedzia³u [1, %d\n]!", N);
        return 1;
    }

    // Inicjalizuje n poczatkowych elementów tablicy
    // liczbami o wartosciach z przedzia³u [1..lim]
    short lim = 999;
    srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
    for (short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % lim + 1;
    }

    wyswietl(tab, n);

    return 0;
}
