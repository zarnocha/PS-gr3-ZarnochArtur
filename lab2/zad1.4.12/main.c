#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, kt�ry wczytuje ze standardowego wej�cia dodatni� liczb� n
i wypisuje na standardowym wyj�ciu sum� wszystkich liczb mniejszych od n,
wzgl�dnie pierwszych z n.
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
