#include <stdio.h>
#include <stdlib.h>
/*
Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn�
liczb� ca�kowit� n i wypisuje na standardowym wyj�ciu liczb� n!.
*/
int main()
{
    int n;
    printf("Prosze podac n: ");
    scanf("%d",&n);
    int i = n;
    int wynik = 1;
    if(n==0 || n == 1)
    {
        printf("Wynik silni, %d! = %d", n, wynik);
        return 0;
    }
    while(i!=0)
    {
        wynik *=i;
        i--;
    }

    printf("Wynik silni, %d! = %d", n, wynik);
    return 0;
}
