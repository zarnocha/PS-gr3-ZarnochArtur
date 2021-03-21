#include <stdio.h>
#include <stdlib.h>

int potegowanie(int n)
{
    int wynik = 1;
    int zmienna = n;
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
    printf("Podaj nieujemna liczbe calkowita n: ");
    scanf("%d",&n);
    if(n<0)
    {
        return -1;
    }
    int wynik = potegowanie(n);
    printf("2 do potegi %d = %d",n,wynik);
    return 0;
}
