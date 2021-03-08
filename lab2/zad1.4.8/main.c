#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu element ci¹gu Fibonacciego o indeksie n.
*/

int main()
{
    int n;
    printf("Prosze podac n: ");
    scanf("%d",&n);

    int wynik;

    if(n == 0)
    {
        wynik = 0;
        printf("Wynik to %d",wynik);
    }
    else if(n == 1)
    {
        wynik = 1;
        printf("Wynik to %d",wynik);
    }
    else
    {
        int pom1 = 1;
        int fib1 = 1;
        int fib2 = 1;
        for(int i=2; i<=n; i++)
            {
                pom1 = fib1;
                fib1 = fib2;
                fib2 = pom1 + fib1;
            }
                printf("%d",fib1);
    }

    return 0;
}
