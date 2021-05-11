#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Napisz funkcjê kopiuj, która dostaje jako argumenty
napis oraz wskaŸnik do napisu (czyli wskaŸnik do wskaŸnika),
tworzy now¹ tablicê znaków, kopiuje do niej napis zawarty w pierwszym argumencie,
i przypisuje wskaŸnik do nowo utworzonej tablicy do zmiennej wskazywanej
przez drugi argument.
*/

char *kopiuj(char *napis, char *wsk)
{
    char tablica[strlen(napis)]; //tworzy nową tablicę znaków,

    for(int i=0; i<strlen(napis); i++)
    {
        tablica[i] = napis[i]; //kopiuje do niej napis zawarty w pierwszym argumencie,
    }
    printf("\nNapis w tablicy: ");
    for(int i=0; i<strlen(napis); i++)
    {
        printf("%c", tablica[i]);
    }

    wsk = &tablica; //przypisuje wskaźnik do nowo utworzonej tablicy do zmiennej wskazywanej przez drugi argument.
    printf("\n\nAdres tablicy %x\n", &tablica);
    printf("Adres wskaznika wsk: %x\n", wsk);
    printf("znak z wsk: %c\n", (*wsk));

    return wsk;
}

int main()
{
    char *napis = "napis";
    char *wsk = &napis;
    printf("znak z wsk: %c\n", *wsk);

    printf("Adres wskaznika wsk: %x\n", wsk);
    printf("Adres napisu: %x\n", &napis);

    wsk = kopiuj(napis, &wsk);

    printf("\nAdres wskaznika wsk: %x\n", wsk);
    printf("znak z wsk: %c\n", *wsk);
    return 0;
}
