#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void odwroc(short tab[], int lewy, int prawy);
void wyswietl(short tab[], int n);
void generuj(short tab[], int n);

int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    int lewy;
    int prawy;
    printf("Podaj wartosc lewego: ");
    scanf("%d", &lewy);
    if(lewy < 0 || lewy > n)
    {
        printf("Lewy niepoprawny.");
        return 1;
    }

    printf("Podaj wartosc prawego: ");
    scanf("%d", &prawy);
    if(prawy < 0 || prawy > n)
    {
        printf("Prawy niepoprawny.");
        return 1;
    }

    if (n <= 0 || n > N )
    {
        printf("Liczba elementów musi byc z przedzialu [1, %d\n]!", N);
        return 1;
    }


    generuj(tab, n);
    printf("\n");
    wyswietl(tab, n);
    odwroc(tab, lewy, prawy);
    wyswietl(tab, n);

    return 0;
}

void odwroc(short tab[], int lewy, int prawy)
{
    short *l;
    short *p;
    int tmp;

    for(l = tab + lewy, p = tab + prawy; l < tab + ((prawy- lewy+1) / 2) + lewy;)
    {
        tmp = *l;
        *l = *p;
        *p = tmp;
        l++;
        p--;
    }
}

void wyswietl(short tab[], int n)
{
    // Wypisuje n poczatkowych elementów tablicy
    int i = 0;
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%d. %5d \n",i,*p);
        i++;
    }
    printf("\n");

}

void generuj(short tab[], int n)
{
    short lim = 999;
    srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
    for (short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % lim + 1;
    }
}
