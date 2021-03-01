#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int liczba1;
    int liczba2;

    printf("Prosze podac dwie liczby calkowite: \n");
    printf("Pierwsza liczba: ");
    scanf("%d", &liczba1);
    printf("Druga liczba: ");
    scanf("%d", &liczba2);
    if(abs(liczba1) > abs(liczba2))
    {
        printf("Wieksza liczba w wartosci bezwzglednej to %d", liczba1);
    }
    else
    {
        printf("Wieksza liczba w wartosci bezwzglednej to %d", liczba2);
    }
    return 0;
}
