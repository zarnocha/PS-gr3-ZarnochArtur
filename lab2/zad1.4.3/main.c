#include <stdio.h>
#include <stdlib.h>
/*
 Napisz program wczytujący ze standardowego wejścia trzy dodatnie liczby całkowite
 n, m i k,
 i wypisujący w kolejnych wierszach wszystkie wielokrotności n większe od m
 i mniejsze od k.
 */
int main()
{
    int n; int m; int k;
    printf("Prosze podac n: ");
    scanf("%d",&n);
    printf("Prosze podac m: ");
    scanf("%d",&m);
    printf("Prosze podac k: ");
    scanf("%d",&k);

    //n=3
    //m = 10    k = 20
    //(10,20) => 12, 15, 18

    int i = n;

    if(n<m)
    {
        n+=m;
    }

    while(n>m && n<k)
    {
        printf("%d ",n);
        n += i;
    }
    return 0;
}
