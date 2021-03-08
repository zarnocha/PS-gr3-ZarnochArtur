#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, który wczytuje ze standardowego wejścia liczbę całkowitą n (n >2)
i wypisuje na standardowym wyjściu iloczyn liczb parzystych z zakresu od 2 do n
(czyli 2∗4∗. . .∗n dla n parzystych i 2∗4∗. . .∗(n−1) w przeciwnym wypadku).
*/

int main()
{
    int n;
    printf("Prosze podac n>2: ");
    scanf("%d",&n);

    int wynik =1;

    if(n<2)
    {
     printf("Blad!");
     return -1;
    }
    else if(n%2 == 0)
    {
        for(int i=2; i<=n; i += 2)
        {
            wynik *= i;
        }
    }
    else if(n%2 != 0)
    {
        n--;
        for(int i=2; i<=n; i+=2)
        {
            wynik *= i;
        }
    }
    printf("Iloczyn wynosi: %d",wynik);
    return 0;
}
