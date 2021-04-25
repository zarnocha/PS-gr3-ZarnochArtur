#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypisz(const short tab[], int n);
void generuj(short tab[], int n);
short sumaDodatnich(const short tab[], int n);
short sumaUjemnych(const short tab[], int n);

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

    int sumaPlus = sumaDodatnich(tab, n);
    int sumaMinus = sumaUjemnych(tab, n);

    printf("\nSuma liczb dodatnich: %d\nSuma liczb ujemnych: %d\n", sumaPlus, sumaMinus);

    return 0;
}

short sumaDodatnich(const short tab[], int n)
{
    int suma = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] > 0)
        {
            suma += tab[i];
        }
    }
    return suma;
}

short sumaUjemnych(const short tab[], int n)
{
    int suma = 0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] < 0)
        {
            suma += tab[i];
        }
    }
    return suma;
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
