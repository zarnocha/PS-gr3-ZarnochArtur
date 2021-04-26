#include <stdio.h>
#include <stdlib.h>

// Napisz funkcjê przepisz, która otrzymuje dwie tablice znaków
// i przepisuje napis znajduj¹cy siê w pierwszej tablicy do drugiej tablicy.
// Zak³adamy, ¿e w drugiej tablicy jest wystarczaj¹co du¿o miejsca. Napisz
// dwie wersje funkcji przepisz dla napisów sk³adaj¹cych siê ze znaków
// typu char i wchar_t


void przepisz(char napis1[], char napis2[], int dlugosc1, int dlugosc2)
{
    int i;
    /*printf("Napis forem: ");
    for(i=0; i < (sizeof(*napis1)/sizeof(char)); i++)
    {
        printf("%c",napis1[i]);
    }*/
    printf("\nNapis1: ");
    for(i=0; i < dlugosc1; i++)  // wypisanie forem napisu1
    {
        printf("%c", napis1[i]);
    }
    printf("\n");
    for(i=0; i < dlugosc1; i++)   // zapisanie napisu2
    {
        napis2[i] = napis1[i];
    }
}

int main()
{
    char napis1[] = "dziala dla kazdego napisu";
    char napis2[(sizeof(napis1)*2)];
    int dlugosc1 = sizeof(napis1)/sizeof(char);
    int dlugosc2 = sizeof(napis2)/sizeof(char);

    printf("Napis2 undeclared: %s\n", napis2);

    przepisz(napis1, napis2, dlugosc1, dlugosc2);
    printf("\nNapis po zamianie: %s\n", napis2);

    return 0;
}
