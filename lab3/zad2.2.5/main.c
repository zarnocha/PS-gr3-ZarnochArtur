#include <stdio.h>
#include <stdlib.h>

int abs(int a)
{
    if(a<0)
    {
        return a*(-1);
    }
    else return a;
}

float potegowanie(int n)
{
    int zmienna;

    if(n<0)
    {
        zmienna = abs(n);
    }
    else
    {
        zmienna = n;
    }
    float wynik = 1;

    while(zmienna>0)
    {
        wynik *= 2;
        zmienna--;
    }
    if(n<0)
    {
        return 1/wynik;
    }
    else return wynik;

}

int main()
{
    int n;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d",&n);
    float k = potegowanie(n);
    printf("2^%d = %f",n,k);
    return 0;
}
