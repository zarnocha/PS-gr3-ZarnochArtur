#include <stdio.h>
#include <stdlib.h>


int wyszukiwanie_k(int n)
{
    for(int i = n-1; i>0; i--)
    {
        if(n % i == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Podaj nieujemne n wieksze od 2: ");
    scanf("%d",&n);
    if(n < 3) return -1;
    int k = wyszukiwanie_k(n);
    printf("K = %d",k);
    return 0;
}
