#include <stdio.h>
#include <stdlib.h>

float foo(int n, int m, int p)
{
    if(n == 0)
    {
        return 0;
    }

    if(m == 0)
    {
        return 1/p;
    }


    int zmienna = m-1;

    if(zmienna < 0)
    {
        zmienna *= -1;
    }

    float podstawa = n;

    while(zmienna > 0)
    {
        podstawa*=n;
        zmienna--;
    }


    if(m < 0)
    {
        return ((1/podstawa)/p);
    }
    else
    {
        return (podstawa/p);
    }
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

    if(p == 0)
    {
        printf("Nie mozna dzielic przez 0!");
        return -1
    }

    if(n == 0 && m == 0 && p == 0)
    {
        return -1;
    }

    float wynik = foo(n, m, p);
    printf("Wynik to %f", wynik);

    return 0;
}
