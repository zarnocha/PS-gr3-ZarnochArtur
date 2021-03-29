#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//12:32 - 20 min >>> 12:52
int main()
{
    const int N = 1000;
    printf("Podaj liczbe z przedzialu 1 do %d: ", N);
    int n;
    scanf("%d",&n);
    if(n<1 || n>N)
    {
        printf("Liczba nie jest z przedzialu od 1 do %d",N);
        return -1;
    }
    short limit = 100;
    short tab[N];
    srand(time(0));
    for (int j = 0; j < n; ++j)
    {
        tab[j] = rand() % limit + 1;
    }

    for(int i=0; i<n; i++)
    {
        if(tab[i] % 2 != 0)
        {
            tab[i] = tab[i] * 2;
        }
        else if(tab[i] % 2 == 0)
        {
            tab[i] = tab[i] * (-1);
        }
    }

    printf("Tablica: ");
    for(int i=0; i<n; i++)
    {
        if(i < n-1)
        {
            printf("%5d, ", tab[i]);
        }
        else if(i < n)
        {
            printf("%5d", tab[i]);
        }
    }

    for(int i=0; i<n; i++)
    {
        if(tab[i] > 0)
        {
            tab[i] = 1;
        }
        else if(tab[i] < 0)
        {
            tab[i] = -1;
        }
    }

    printf("\nTablica: ");
    for(int i=0; i<n; i++)
    {
        if(i < n-1)
        {
            printf("%5d, ", tab[i]);
        }
        else if(i < n)
        {
            printf("%5d", tab[i]);
        }
    }

    return 0;
}
