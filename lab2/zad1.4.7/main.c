#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, kt�ry wczytuje ze standardowego wej�cia dwie liczby ca�kowite n i m(zak�adamy, �e n < m)
i wypisuje na standardowym wyj�ciu liczb� n*. . .*m.
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
