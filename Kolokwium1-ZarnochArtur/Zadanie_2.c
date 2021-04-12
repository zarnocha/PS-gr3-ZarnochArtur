#include <stdio.h>
#include <stdlib.h>

float foo(int n, int m, int p)
{
    int zmienna = m-1;
    int podstawa = n;
    float wynik;

    if(n == 0)
    {
        return 0;
    }

    if(m == 0)
    {
        n = 1;
    }

    if(m < 0)
    {
        zmienna *= -1;
    }

    while(zmienna>0)
    {
        podstawa *= n;
        zmienna--;
    }

    if(m < 0)
    {
        wynik = ((1/podstawa)*(1/p));
        return wynik;
    }

    wynik = podstawa/p;
    return wynik;
}


float funkcja(int n, int m, int p)
{
    int zmienna = m-1;
    while(zmienna > 0)
    {
        n *= n;
        zmienna--;
    }
    return n/p;
}

int main()
{
    printf("Podaj liczbe n: ");
    int n;
    scanf("%d",&n);

    printf("Podaj liczbe m: ");
    int m;
    scanf("%d",&m);

    printf("Podaj liczbe p: ");
    int p;
    scanf("%d",&p);

    if(n == 0 && m == 0 && p == 0)
    {
        return -1;
    }

    float wynik = foo(n, m, p);
    //float liczba = funkcja(n, m, p);
    printf("Wynik to %0.2f", wynik);

    return 0;
}
