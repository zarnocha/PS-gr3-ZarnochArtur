#include <stdio.h>
#include <stdlib.h>

int ostatnia_cyfra(int n)
{
    int ostatnia = n%10;
    return ostatnia;
}
int main()
{
    //printf("Podaj liczbe n: ");
    int n;
    //scanf("%d", &n);
    n = 98765;
    int ostatnia = ostatnia_cyfra(n);
    printf("Ostatnia cyfra %d to %d", n, ostatnia);

    return 0;
}
