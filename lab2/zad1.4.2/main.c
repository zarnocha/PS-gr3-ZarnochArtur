#include <stdio.h>
#include <stdlib.h>

/*
Napisz program wczytuj�cy ze standardowego wej�cia dwie dodatnie liczby ca�kowite n i m,
 i wypisuj�cy na standardowym wyj�ciu m pierwszych wielokrotno�ci liczby n.
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
