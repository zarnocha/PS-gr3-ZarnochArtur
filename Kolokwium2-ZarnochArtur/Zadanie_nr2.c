#include <stdio.h>
#include <stdlib.h>
#define N 500
/*
UWAGA! W poniższym programie do przechodzenia tablicy zamiast indeksów należy użyć wskaźników,
a każdy operator indeksowania należy zastąpić operatorem dereferencji. Napisz program, który deklaruje stałą N=500,
wczytuje do zmiennej n liczbę całkowitą z przedziału [1, N]
i generuje n początkowych elementów tablicy o wartościach całkowitych z przedziału od -200 do 100,
a następnie odwróci fragment tablicy przy pomocy funkcji odwróć

    void odwroc(short tab[], int lewy, int prawy).

Po wygenerowaniu tablicy oraz po każdej operacji należy wypisać zawartość tablicy.
 Przetestuj odpowiednio program.
*/

void generacja_tablicy(short tab[], int n)
{
	for(int i=0; i<n; i++)
	{
		*(tab+i) = -200 + rand() % (100 - (-200) + 1);
	}
}

void show(short tab[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", *(tab+i));
	}
}

int main()
{
	int n;
	printf("Podaj n: ");
	scanf("%d", &n);

	if(n<1)
	{
		printf("Za mala liczba.");
		return 1;
	}
	else if(n>N)
	{
		printf("Za duza liczba.");
		return 1;
	}

	short tab[N];
	generacja_tablicy(tab, n);
	show(tab, n);
    return 0;
}
