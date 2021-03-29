#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int N = 1000;
    printf("Podaj liczbe z przedzialu 1 do %d: ", N);
    int n;
    scanf("%d",&n);
    int lewy; int prawy;
    printf("Podaj dwie nieujemne liczby nie wieksze od %d: ",n);
    scanf("%d",&lewy);
    scanf("%d",&prawy);
    if(n<1 || n>N)
    {
        printf("Liczba nie jest z przedzialu od 1 do %d",N);
        return -1;
    }
    if(lewy>n || lewy<0)
    {
        printf("Lewy nie jest z przedzialu 0 do %d",n);
        return -1;
    }
    if(prawy>n || prawy<0)
    {
        printf("Lewy nie jest z przedzialu 0 do %d",n);
        return -1;
    }

    short limit = 100;
    short tab[N];
    srand(time(0));
    for (int j = 0; j < n; ++j)
    {
        tab[j] = rand() % limit + 1;
    }

    if(prawy < lewy) //moze byc zbedne
    {
        int tmp = lewy;
        lewy = prawy;
        prawy = tmp;
    }

    //printf("lewy: %d, prawy: %d",lewy,prawy);

    printf("\nTablica przed zamiana: ");
    for(int i=0; i<n; i++)
    {
        if(i < n-1)
        {
            printf("%d. %d, \n", i,tab[i]);
        }
        else if(i < n)
        {
            printf("%d. %d\n", i,tab[i]);
        }
    }

    int tmp = tab[lewy];
    tab[lewy] = tab[prawy];
    tab[prawy] = tmp;

    printf("\nTablica po zamianie: ");
    for(int i=0; i<n; i++)
    {
        if(i < n-1)
        {
            printf("%d. %d, \n", i,tab[i]);
        }
        else if(i < n)
        {
            printf("%d. %d\n", i,tab[i]);
        }
    }

    return 0;
}
