#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    printf("Prosze podac liczbe: ");
    scanf("%d", &liczba);

    if(liczba>0)
    {
        printf("Wartosc bezwzgledna to: %d",liczba);
    }
    else
    {
        liczba *= -1;
        printf("Wartosc bezwzgledna to: %d", liczba);
    }


    return 0;
}
