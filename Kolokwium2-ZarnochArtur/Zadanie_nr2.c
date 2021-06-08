#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 500

/*
UWAGA! W poni¿szym programie do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników,
a ka¿dy operator indeksowania nale¿y zast¹piæ operatorem dereferencji. Napisz program, który deklaruje sta³¹ N=500,
wczytuje do zmiennej n liczbê ca³kowit¹ z przedzia³u [1, N]
i generuje n pocz¹tkowych elementów tablicy o wartoœciach ca³kowitych z przedzia³u od -200 do 100,
a nastêpnie odwróci fragment tablicy przy pomocy funkcji odwróæ

    void odwroc(short tab[], int lewy, int prawy).

Po wygenerowaniu tablicy oraz po ka¿dej operacji nale¿y wypisaæ zawartoœæ tablicy.
 Przetestuj odpowiednio program.
*/

void generacja_tablicy(short tab[], int n)
{
	srand(time(NULL));
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

void odwroc(short tab[], int lewy, int prawy)
{
	int temp;
	int roznica = (prawy-lewy+1)/2;

    /*for(int i = lewy, j = prawy; i < roznica; i++, j--)
    {
		temp = *(tab+i);
		*(tab+i) = *(tab+j);
		*(tab+j) = temp;
    }*/
	prawy--;
	lewy--;
    for(int i = 0; i<roznica; i++)
    {
		temp = *(tab+lewy+i);
		*(tab+lewy+i) = *(tab+prawy-i);
		*(tab+prawy-i) = temp;
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

	odwroc(tab, 3, 6);
	printf("\n");
	show(tab, n);

    return 0;
}
