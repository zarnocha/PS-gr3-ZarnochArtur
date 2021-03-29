#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void odwroc(short tab[], int lewy, int prawy);
void generuj(short tab[], int n, short lim);
void wypisz(const short tab[], int n);
void wypisz_index(const short tab[], int n);

int main()
{
    const int N = 1000;
    printf("Podaj liczbe z przedzialu 1 do %d: ", N);
    int n;
    scanf("%d", &n);

    short limit = 100;
    short tab[N];

    generuj(tab, n, 100);
    printf("Tablica przed ogolna zmiana: \n");
    wypisz_index(tab, n);

    int lewy; int prawy;

    printf("Podaj dwie nieujemne liczby nie wieksze od %d: \n", n);
    scanf("%d", &lewy);
    scanf("%d", &prawy);

    if (n<1 || n>N)
    {
        printf("Liczba nie jest z przedzialu od 1 do %d", N);
        return -1;
    }
    if (lewy > n || lewy < 0)
    {
        printf("Lewy nie jest z przedzialu 0 do %d", n);
        return -1;
    }
    if (prawy > n || prawy < 0)
    {
        printf("Lewy nie jest z przedzialu 0 do %d", n);
        return -1;
    }

    odwroc(tab, lewy, prawy);

    printf("\nTablica po zmianie: \n");
    wypisz_index(tab, n);


    return 0;
}


void odwroc(short tab[], int lewy, int prawy)
{
    int dlugosc = prawy - lewy + 1;
    if (dlugosc % 2 != 0)
    {
        dlugosc--;
    }
    int left = lewy; int right = prawy; int tmp;

    for (int i = 0; i < dlugosc / 2; i++)
    {
        tmp = tab[left];
        tab[left] = tab[right];
        tab[right] = tmp;
        left++;
        right--;
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

void generuj(short tab[], int n, short lim)
{
    // inicjalizacja generatora liczb pseudolosowych
    srand(time(0));
    for (int j = 0; j < n; ++j)
    {
        tab[j] = rand() % lim + 1;
    }
}

void wypisz_index(const short tab[], int n)
{
    for (int j = 0; j < n; ++j)
    {
        printf("%d. %5d\n", j, tab[j]);
    }
    printf("\n");
}

