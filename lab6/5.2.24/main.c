#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Napisz funkcjê kopiuj, która dostaje jako argumenty
napis oraz tablicê znaków i przepisuje napis do
otrzymanej w argumencie tablicy znaków
*/

void kopiuj(char *napis, char tablica[])
{
    for(int i=0; i<strlen(napis); i++)
    {
        tablica[i] = napis[i];
    }
    printf("\n***Kopiowanie zakonczone.***\n");
}

int main()
{
    char *napis = "testowanie";
    printf("Nap1: %s\n", napis);

    char tablica[strlen(napis)];
    printf("Nap2: %s\n", tablica);

    size_t len1 = sizeof(napis)/sizeof(char);
    size_t len2 = sizeof(tablica)/sizeof(char);

    printf("\nlen1: %d\n", len1);
    printf("len2: %d\n", len2);

    kopiuj(napis, tablica);
    printf("\nSkopiowany napis: %s\n", tablica);

    return 0;
}
