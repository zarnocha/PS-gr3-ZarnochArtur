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
    printf("\nstrlen: %d\n", strlen(napis));
//    if(strlen(napis)<3) //koniecznosc zeby dzialalo dla pojedyn. liter, bez tego - krzaki
//    {
//        for(int i=(sizeof(tablica)); i>=strlen(napis); i--)
//        {
//            tablica[i] = "\0";
//        }
//    }
//    if(sizeof(tablica)>=8) //war. konieczny bo znow krzaki
//    {
//        if(strlen(napis)>8)
//        {
//            int zmienna;
//            zmienna = (sizeof(tablica)-8);
//            for(int i=(sizeof(tablica))+zmienna ; i>=strlen(napis); i--) //jesli strlen(napis) = 13, to po dodaniu do sizeof(tablica) 5, nie ma krzakow, tak samo dla strlen(napis) = 12 i sizeof(tablica)+4, itd.
//            {
//                tablica[i] = '\0';
//            }
//        }
//    }
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
        rozmiar = (strlen(napis)*4);
    }
    else
    {
        rozmiar = strlen(napis)*(2);
    }
    char tablica[rozmiar];
    printf("\nsizeof tablica: %d\n", sizeof(tablica));

    // printf("tablica: %s\n", tablica);

    kopiuj(napis, tablica);
    if(strlen(napis) > 4)
    {
        printf("\nnapis: %s\n", tablica);
    }
    else
    {
        printf("\nnapis: ");
        for(int i=0; i<strlen(napis); i++)
        {
            printf("%c", tablica[i]);
        }
        printf("\n");
    }
    return 0;
}
