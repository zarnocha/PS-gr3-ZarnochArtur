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

float potegowanie(int n, int m)
{
    int zmienna = m;
    if(zmienna<0)
    {
        zmienna = abs(m);
    }
    float wynik = 1;
    while(zmienna > 0)
    {
        wynik *= n;
        zmienna--;
    }
    if(m<0)
    {
        return 1/wynik;
    }
    else return wynik;
}

int main()
{
    int n;
    int m;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);
    if(n == 0 && m == 0)
    {
        return -1;
    }
    float k = potegowanie(n,m);
    printf("%d^%d = %f",n,m,k);
    return 0;
}
