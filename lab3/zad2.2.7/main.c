#include <stdio.h>
#include <stdlib.h>

int potegowanie(int n, int m)
{
    int zmienna = m;
    int wynik = 1;
    while(zmienna > 0)
    {
        wynik *= n;
        zmienna--;
    }
    return wynik;
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
    int k = potegowanie(n,m);
    printf("%d^%d = %d",n,m,k);
    return 0;
}
