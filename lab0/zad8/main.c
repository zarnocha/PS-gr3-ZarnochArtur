#include <stdio.h>
#include <stdlib.h>

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
    int srednia= (liczba1+liczba2+liczba3)/3;

    printf("Srednia arytmetyczna wynosi: %d",srednia);

    return 0;
}
