#include <stdio.h>
#include <stdlib.h>

/*(r,!)Napisz program wczytujący ze standardowego wejścia
dwie dodatnie liczby całkowite n i m,
i wypisujący w kolejnych wierszach na
standardowym wyjściu wszystkie dodatnie wielokrotności n mniejsze od m.*/

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
