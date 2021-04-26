#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap)
{
    int i=0;
    while(nap[i] != 0)
    {
        i++;
    }
    return i;
}

int main()
{
    char * napis = 'vvb';
    int length = dlugosc(&napis);
    printf("Dlugosc: %d", length);
    return 0;
}
