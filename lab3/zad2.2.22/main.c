#include <stdio.h>
#include <stdlib.h>

unsigned long long ciag(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    unsigned long long a_n = ciag(n-1) + 2*ciag(n-2) + 3;
    return a_n;
}

unsigned long long ciag_i(int n) //nie dziala
{
    if(n==0 || n==1)
    {
        return 1;
    }

    unsigned long long a = 1;
    unsigned long long a_minus;
    unsigned long long a_minus_minus;

    for(int i=0; i<=n-2; i++)
    {
        unsigned long long nowe_a = 2 * a + 5;
        a_minus_minus = nowe_a;
    }
    for(int i=0; i<=n-1; i++)
    {
        unsigned long long nowe_a = 2 * a + 5;
        a_minus_minus = nowe_a;
    }

    for(int i=0; i<n; i++)
    {
        unsigned long long nowe_a = 2 * a + 5;
        a = nowe_a;
    }
    return a;
}

int main()
{
    printf("%llu",ciag(0));
    printf("%llu\n",ciag(1));
    printf("%llu\n",ciag(2));
    printf("%llu\n",ciag(3));
    printf("%llu\n",ciag(40));
}
