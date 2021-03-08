#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int delta(int a, int b, int c)
{
    int wynik = (b*b) - (4*a*c);
    return wynik;
}

int main()
{
    int a; int b; int c; int d;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    printf("Podaj c: ");
    scanf("%d",&c);
    printf("Podaj d: ");
    scanf("%d",&d);
    c = c-d;

    int deltaa = delta(a,b,c);
    int x1; int x2;
    int pierwiastek = sqrt(deltaa);
    x1 = (-b - pierwiastek)/(2*a);
    x2 = (-b + pierwiastek)/(2*a);

   // printf("delta %d", deltaa);

    //printf("x1 = %d, x2 = %d", x1,x2);
    if(a > 0)
    {
        if(x1<x2)
        {
            if(x1>0)
            {
                if(x1>d)
                {
                    printf("%d",x1);
                    return 0;
                }
            }
        }
        else if(x1>x2)
        {
            if(x2>d)
            {
                printf("%d",x2);
                return 0;
            }
        }
    }
    else if(a<0)
    {
                if(x1<x2)
        {
            if(x1>0)
            {
                if(x1>d)
                {
                    printf("%d",x1);
                    return 0;
                }
            }
        }
        else if(x1>x2)
        {
            if(x2>d)
            {
                printf("%d",x2);
                return 0;
            }
        }
    }

    return 0;
}
