#include <stdio.h>
#include <stdlib.h>

int pierwiastek(int n)
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
    printf("Podaj liczbe dodatnia n: ");
    scanf("%d",&n);
    int k = pierwiastek(n);
    printf("Pierwiastek z %d = %d",n,k);
    return 0;
}
