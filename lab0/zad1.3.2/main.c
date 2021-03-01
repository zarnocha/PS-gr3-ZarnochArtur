#include <stdio.h>
#include <stdlib.h>

//Napisz program, który wczytuje ze standardowego wejœcia dwie liczby ca³kowite i wypisuje na standardowym
//wyjœciu wiêksz¹ z nich(w przypadku gdy podane liczby s¹ równe,
//program powinien wypisaæ któr¹kolwiek z nich).

int main()
{
    int liczba1;
    int liczba2;
    printf("Prosze podac pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Prosze podac druga liczbe: ");
    scanf("%d", &liczba2);
    if(liczba1>liczba2)
    {
        printf("Liczby w kolejnosci rosnacej: %d %d", liczba2, liczba1);
    }
    else if(liczba2>liczba1)
    {
        printf("Liczby w kolejnosci rosnacej: %d %d", liczba1, liczba2);
    }
    return 0;
}
