#include <stdio.h>
#include <stdlib.h>
//Napisz program, kt�ry wczytuje ze standardowego wej�cia liczb�
//ca�kowit� i wypisuje na standardowym wyj�ciu liczb� o jeden wi�ksz�.

int main()
{
    int numer;
    printf("Prosze podac liczbe calkowita: ");
    scanf("%d",&numer);
    printf("Liczba o jeden wieksza to: %d", ++numer);
    return 0;
}
