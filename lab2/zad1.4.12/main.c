#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, który wczytuje ze standardowego wejœcia dodatni¹ liczbê n
i wypisuje na standardowym wyjœciu sumê wszystkich liczb mniejszych od n,
wzglêdnie pierwszych z n.
*/

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    int wynik = 0;

    for(int i=1; i<=n; i++)
    {
        wynik += i;
    }
    printf("Wynik = %d",wynik);
    return 0;
}
