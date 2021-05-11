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
    if(strlen(napis)<3) //koniecznosc zeby dzialalo dla pojedyn. liter, bez tego - krzaki
    {
        for(int i=sizeof(tablica); i>=strlen(napis); i--)
        {
            tablica[i] = "\0";
        }
    }
    if(sizeof(tablica)>=8) //war. konieczny bo znow krzaki
    {
        for(int i=sizeof(tablica); i>=strlen(napis); i--)
        {
            tablica[i] = '\0';
        }
    }
}

int main()
{
    char *napis = malloc(sizeof(char));
    printf("Podaj napis: ");
    gets(napis);
    printf("napis: %s\n", napis);
    printf("\nsizeof nap %d", strlen(napis));

    int rozmiar;
    if(strlen(napis) < 3) //zeby dzialalo dla pojedynczych liter
    {
        rozmiar = 8;
    }
    else
    {
        rozmiar = strlen(napis)+1;
    }
    char tablica[rozmiar];
    printf("\nsizeof tablica: %d\n", sizeof(tablica));

    // printf("tablica: %s\n", tablica);

    kopiuj(napis, tablica);
    printf("\nSkopiowany napis: %s\n", tablica);
    return 0;
}
