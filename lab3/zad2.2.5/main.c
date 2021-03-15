#include <stdio.h>
#include <stdlib.h>

int potegowanie(int n)
{
    int zmienna = n;
    int wynik = 1;
    while(zmienna>0)
    {
        wynik *= 2;
        zmienna--;
    }
    return wynik;
}

int main()
{
    int n;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d",&n);
    int k = potegowanie(n);
    printf("2^%d = %d",n,k);
    return 0;
}
