#include <stdio.h>
#include <stdlib.h>

/*
Napisz program wczytujący ze standardowego wejścia dwie dodatnie liczby całkowite n i m,
 i wypisujący na standardowym wyjściu m pierwszych wielokrotności liczby n.
*/

int main()
{
    int n; int m;
    printf("Prosze podac n: ");
    scanf("%d",&n);
    printf("Prosze podac m: ");
    scanf("%d",&m);

    for(int i=1; i<=m; i++)
    {
        printf("%d ", n*i);
    }

    printf("\n");

    return 0;
}
