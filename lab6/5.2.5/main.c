#include <stdio.h>
#include <stdlib.h>

// Napisz funkcj� przepisz, kt�ra otrzymuje dwie tablice znak�w
// i przepisuje napis znajduj�cy si� w pierwszej tablicy do drugiej tablicy.
// Zak�adamy, �e w drugiej tablicy jest wystarczaj�co du�o miejsca. Napisz
// dwie wersje funkcji przepisz dla napis�w sk�adaj�cych si� ze znak�w
// typu char i wchar_t


void przepisz(char napis1[], char napis2[])
{
    int i;
    /*printf("Napis forem: ");
    for(i=0; i < (sizeof(*napis1)/sizeof(char)); i++)
    {
        printf("%c",napis1[i]);
    }*/
    for(i=0; i < sizeof(napis1); i++)
    {
        napis2[i] = napis1[i];
    }
}

int main()
{
    /*char napis1[] = "dlugi bardzo napis";
    printf("%s\n", napis1);
    printf("sizeof(napis1)%d\n", sizeof(napis1));

    char napis2[(sizeof(napis1))];

    printf("\nNapis2: %s", napis2);
    printf("sizeof(napis2)%d\n", sizeof(napis2));

    przepisz(&napis1, &napis2);

    printf("\n(Po zmianie) Napis2: %s", napis2);*/

    char napis1[] = "napis";
    char napis2[sizeof(napis1)];

    printf("Napis2 undeclared: %s\n", napis2);

    przepisz(napis1, napis2);
    printf("Napis po zamianie: %s\n", napis2);

    return 0;
}
