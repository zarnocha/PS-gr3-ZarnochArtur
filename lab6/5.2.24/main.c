#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Napisz funkcj� kopiuj, kt�ra dostaje jako argumenty
napis oraz tablic� znak�w i przepisuje napis do
otrzymanej w argumencie tablicy znak�w
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
    char *napis = "testowy napis";
    printf("napis: %s\n", napis);

    char tablica[strlen(napis)];
    printf("tablica: %s\n", tablica);

    kopiuj(napis, tablica);
    printf("\nSkopiowany napis: %s\n", tablica);

    return 0;
}
