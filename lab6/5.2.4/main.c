#include <stdio.h>
#include <stdlib.h>

int porownaj(char *nap1, char *nap2)
{
    int i;
    for(i=0; (nap1[i] != 0) && (nap2[i] != 0); i++)
        if(nap1[i] != nap2[i])
            return (nap1[i] < nap2[i]) ?1:0;
        if(nap1[i] != 0)
            return 0;
        else
            return 1;
}

int main()
{
    char napis1[] = "aaA";
    char napis2[] = "aaA";

    int porownanie = porownaj(napis1, napis2);

    if(porownanie == 1)
    {
        printf("nap1[i] < nap2[i]");
    }
    else
    {
        printf("nap1[i] > nap2[i]");
    }


    return 0;
}
