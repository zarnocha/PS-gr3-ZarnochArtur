#include <stdio.h>
#include <stdlib.h>
//Napisz program, kt�ry wczytuje ze standardowego wej�cia trzy liczby ca�kowite,
//a nast�pnie wypisuje je w oddzielnych liniach na standardowym wyj�ciu.
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
