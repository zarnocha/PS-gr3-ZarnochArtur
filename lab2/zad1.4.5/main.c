#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn� liczb� ca�kowit� n i wypisuje
na standardowym wyj�ciu sum� kwadrat�w liczb od 0 do n, czyli warto�� 0^2+ 1^2+ 3^2+...+n^2.
*/

int main()
{
    int n;
    printf("Prosze podac n: ");
    scanf("%d",&n);

    int wynik = 0;

    for(int i=0; i<=n; i++)
    {
        wynik += (i*i);
    }

    printf("Wynik: %d",wynik);
    return 0;
}
