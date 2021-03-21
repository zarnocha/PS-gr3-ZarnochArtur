#include <stdio.h>
#include <stdlib.h>

void potega(int n, int m)
{
    int wynik = 1;
    int zmienna;
    if(m>0)
    {
        zmienna = m;
        while(zmienna>0)
            {
                wynik*=n;
                zmienna--;
            }
            printf("%d", wynik);
    }
    else if(m<0)
    {
            zmienna = m*(-1);
            while(zmienna>0)
            {
                wynik*=n;
                zmienna--;
            }
            printf("1/%d ",wynik);
    }
    else if(m==0)
    {
        printf("1");
    }
}
int main()
{
    printf("Liczba n: ");
    int n;
    scanf("%d",&n);
    printf("Liczba m: ");
    int m;
    scanf("%d",&m);
    if(n==0 && m==0)
    {
       printf("Obie liczby sa zerem.");
       return -1;
    }
    else
    {
        if(m<0)
        {
           printf("%d^(%d) = ",n,m);
        }
        else
        {
            printf("%d^%d = ",n,m);
        }
        potega(n,m);
    }
    return 0;
}
