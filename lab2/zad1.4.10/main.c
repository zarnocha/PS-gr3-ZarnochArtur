#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę n i wypisuje na standardowym wyjściu wartość
√n (wartość √n zaokrągloną w dół do najbliższej wartości całkowitoliczbowej).
Program napisz bez użycia funkcji z biblioteki matematycznej.
*/

int main()
{
    printf("Podaj n: ");
    int n;
    scanf("%d",&n);
    for(int i=n; i>0; i--)
    {
        if(i*i == n)
        {
            printf("Pierwiastek z %d = %d",n,i);
            return 0;
        }
    }

    return 0;
}
