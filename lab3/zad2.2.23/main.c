#include <stdio.h>
#include <stdlib.h>

int ciag_fibbonaciego(int n)
{
    if(n == 0 || n==1) return 1;
    int f1 = 1;
    int f2 = 1;
    int zmienna;
    for(int i=3; i<=n; i++)
    {
        zmienna = f1+f2;
        f1 = f2;
        f2 = zmienna;
    }
    return f2;
}

int main()
{
    int n;
    printf("Podaj n-ty wyraz ciagu fibbonaciego: ");
    scanf("%d",&n);
    int wynik = ciag_fibbonaciego(n);
    printf("%d wyraz ciagu fibbonaciego to %d",n,wynik);
    return 0;
}

//https://pl.numberempire.com/fibonaccinumbers.php
