#include <stdio.h>
#include <stdlib.h>

/*(r,!)Napisz program wczytuj�cy ze standardowego wej�cia
dwie dodatnie liczby ca�kowite n i m,
i wypisuj�cy w kolejnych wierszach na
standardowym wyj�ciu wszystkie dodatnie wielokrotno�ci n mniejsze od m.*/

int main()
{
    int n; int m;
    printf("Prosze podac n: ");
    scanf("%d",&n);
    printf("Prosze podac m: ");
    scanf("%d",&m);

    int i = n;

    while(n<m)
    {
        printf("%d ",n);
        n +=i;
    }

    return 0;
}
