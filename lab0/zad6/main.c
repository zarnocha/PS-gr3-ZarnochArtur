#include <stdio.h>
#include <stdlib.h>
//Napisz program, który wczytuje ze standardowego wejœcia trzy liczby ca³kowite,
//a nastêpnie wypisuje je w oddzielnych liniach na standardowym wyjœciu.
int main()
{
    int liczba1;
    int liczba2;
    int liczba3;

    printf("Prosze podac 3 liczby calkowite: ");
    printf("\nPierwsza liczba: ");
    scanf("%d", &liczba1);
    printf("Druga liczba: ");
    scanf("%d", &liczba2);
    printf("Trzecia liczba: ");
    scanf("%d", &liczba3);
    printf("\nPodane liczby:\n%d\n%d\n%d",liczba1,liczba2,liczba3);
    return 0;
}
