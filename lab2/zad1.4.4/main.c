#include <stdio.h>
#include <stdlib.h>
/*
Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu liczbê n!.
*/
int main()
{
    int n;
    printf("Prosze podac n: ");
    scanf("%d",&n);
    int i = n;
    int wynik = 1;
    if(n==0 || n == 1)
    {
        printf("Wynik silni, %d! = %d", n, wynik);
        return 0;
    }
    while(i!=0)
    {
        wynik *=i;
        i--;
    }

    printf("Wynik silni, %d! = %d", n, wynik);
    return 0;
}
