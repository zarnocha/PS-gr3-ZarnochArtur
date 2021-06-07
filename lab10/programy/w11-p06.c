// Tworzenie magazynu towarów

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 23

typedef struct {
    int numer;
    char nazwa[NAME_LEN + 1];
    int ilosc;
} Towar;

Towar magazyn[] = {
    {1, "cukier 1kg", 30},
    {2, "kasza gryczana", 40},
    {3, "makaron nitki", 50}
};

int main(main)
{
    FILE *fp;

    if ((fp = fopen("magazyn.dat", "w")) == NULL) {
        fprintf(stderr, "Nie można otworzyć pliku \"magazyn.dat\"\n");
        exit(1);
    }

    size_t ile = sizeof(magazyn) / sizeof(Towar);
    fprintf(stderr, "Liczba towarów w magazynie: %lu\n", ile);

    for (size_t j = 0; j < ile; ++j) {
        fwrite(magazyn + j, sizeof(Towar), 1, fp);
    }

    fclose(fp);

    return 0;
}

