#include <stdio.h>
#include <stdlib.h>

// Napisz funkcjê przepisz, która otrzymuje dwie tablice znaków
// i przepisuje napis znajduj¹cy siê w pierwszej tablicy do drugiej tablicy.
// Zak³adamy, ¿e w drugiej tablicy jest wystarczaj¹co du¿o miejsca. Napisz
// dwie wersje funkcji przepisz dla napisów sk³adaj¹cych siê ze znaków
// typu char i wchar_t


void przepisz(char napis1[], char napis2[])
{
    int i;
    for(i=0; i<sizeof(napis1); i++)
    {
        napis2[i] = 0;
        napis2[i] = napis1[i];
    }
}

int main()
{
    char napis1[] = "dlugi bardzo napis";
    printf("%s\n", napis1);
    printf("sizeof(napis1)%d\n", sizeof(napis1));

    char napis2[(sizeof(napis1)*2)];

    printf("Napis2: %s\n", napis2);
    printf("sizeof(napis2)%d\n", sizeof(napis2));

    przepisz(napis1, napis2);

    printf("Napis2: %s", napis2);

    return 0;
}
