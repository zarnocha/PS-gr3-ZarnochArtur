#include <stdio.h>
#include <stdlib.h>
// Napisz program, kt�ry wczytuje ze standardowego wej�cia trzy liczby ca�kowite
//i wypisuje na standardowym wyj�ciu najwi�ksz� z ich warto�ci (pami�taj o przypadku gdy wszystkie podane liczby lub dwie z nich s� r�wne).
int main()
{
    int liczba1;
    int liczba2;
    int liczba3;

    printf("Prosze podac pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Prosze podac druga liczbe: ");
    scanf("%d", &liczba2);
    printf("Prosze podac trzecia liczbe: ");
    scanf("%d", &liczba3);

    if(liczba1 > liczba2 && liczba1 > liczba3)
    {
        printf("Najwieksza liczba to: %d", liczba1);
    }

    else if(liczba2 > liczba1 && liczba2 > liczba3)
    {
        printf("Najwieksza liczba to: %d", liczba2);
    }

    else if(liczba3 > liczba1 && liczba3 > liczba2)
    {
        printf("Najwieksza liczba to: %d", liczba3);
    }

    else if(liczba1 == liczba2 && liczba1 == liczba3)
    {
        printf("Najwieksza liczba to: %d", liczba1);
    }

    else if(liczba1 == liczba2 && liczba1 > liczba3)
    {
        printf("Najwieksza liczba to: %d", liczba1);
    }

    else if(liczba1 == liczba3 && liczba1 > liczba2)
    {
        printf("Najwieksza liczba to: %d", liczba1);
    }

    else if(liczba2 == liczba3 && liczba2 > liczba1)
    {
        printf("Najwieksza liczba to: %d", liczba2);
    }

    return 0;
}
