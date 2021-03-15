#include <stdio.h>
#include <stdlib.h>

float pierwiastek(int n)
{
    for(int i = 1; i<n; i++)
    {
        if(i*i == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita n: ");
    scanf("%d",&n);
    if(n<0) return -1;
    printf("%f",pierwiastek(n));
    return 0;
}
