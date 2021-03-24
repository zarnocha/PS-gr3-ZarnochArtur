#include <stdio.h>
#include <stdlib.h>

int ciag(int n, int m)
{
    if(m == 0) return (n,0);
}

int main()
{
    int n; int m;
    printf("Podaj pare liczb n i m: ");
    scanf("%d %d",&n,&m);
    printf("wynik : %d %d",ciag(n,m));
    return 0;
}
