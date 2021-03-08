#include <stdio.h>
#include <stdlib.h>

/*
Napisz program wczytuj¹cy ze standardowego wejœcia dwie dodatnie liczby ca³kowite n i m,
 i wypisuj¹cy na standardowym wyjœciu m pierwszych wielokrotnoœci liczby n.
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
