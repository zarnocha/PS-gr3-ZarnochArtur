#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, kt�ry wczytuje ze standardowego wej�cia dodatnie liczby ca�kowite n i m,
i wypisuje na standardowym wyj�ciu najwi�kszy wsp�lny dzielnik tych liczb.
*/

int main()
{
    int n; int m;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);

    if(n<m)
    {
        for(int i = m; i>0; i--)
        {
            if(n%i == 0 && m%i == 0)
            {
               printf("NWD %d i %d to %d",n,m,i);
               return 0;
            }
        }
    }
    else if(n>m)
    {
        for(int i = n; i>0; i--)
        {
            if(n%i == 0 && m%i == 0)
            {
               printf("NWD %d i %d to %d",n,m,i);
               return 0;
            }
        }
    }
    return 0;
}
