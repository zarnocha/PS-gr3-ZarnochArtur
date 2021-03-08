#include <stdio.h>
#include <stdlib.h>

/*(r,!)Napisz program wczytuj¹cy ze standardowego wejœcia
dwie dodatnie liczby ca³kowite n i m,
i wypisuj¹cy w kolejnych wierszach na
standardowym wyjœciu wszystkie dodatnie wielokrotnoœci n mniejsze od m.*/

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
