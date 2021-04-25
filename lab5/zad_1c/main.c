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

    // Inicjalizuje n poczatkowych elementów tablicy
    // liczbami o wartosciach z przedzia³u [1..lim]
    short lim = 999;
    srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
    for (short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % lim + 1;
    }

    printf("\n");
    // Wypisuje n poczatkowych elementów tablicy
    int i = 0;
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%d. %5d \n",i,*p);
        i++;
    }
    printf("\n");

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
        // Wypisuje n poczatkowych elementów tablicy
    i = 0;
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%d. %5d \n",i,*p);
        i++;
    }
    printf("\n");
    return 0;
}
