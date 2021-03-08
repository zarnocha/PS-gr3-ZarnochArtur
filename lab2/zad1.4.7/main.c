#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, który wczytuje ze standardowego wejœcia dwie liczby ca³kowite n i m(zak³adamy, ¿e n < m)
i wypisuje na standardowym wyjœciu liczbê n*. . .*m.
*/

int main()
{
    int n; int m;
    printf("Prosze podac n: ");
    scanf("%d",&n);
    printf("Prosze podac m: ");
    scanf("%d",&m);

    int wynik = 1;

    if(n>=m)
    {
        printf("Blad!");
        return -1;
    }
    else
    {
        for(int i = n; i<=m; i++)
        {
            wynik*= i;
        }
    }
    printf("Iloczyn od %d do %d to: %d",n,m,wynik);
    return 0;
}
