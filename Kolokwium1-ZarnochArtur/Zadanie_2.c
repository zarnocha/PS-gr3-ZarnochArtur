#include <stdio.h>
#include <stdlib.h>

float foo(int n, int m, int p)
{
    for(int i=1; i<=m; i++)
    {
        n *= n;
    }
    return (n/p);
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

    float wynik = foo(n,m,p);

    printf("Wynik to %f",wynik);

    return 0;
}
