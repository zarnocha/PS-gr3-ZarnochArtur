// Wypisywanie magazynu towarów

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 23

typedef struct {
    int numer;
    char nazwa[NAME_LEN + 1];
    int ilosc;
} Towar;

int main(void)
{
    FILE *fp;

    if ((fp = fopen("magazyn.dat", "r")) == NULL) {
        fprintf(stderr, "Nie można otworzyć pliku \"magazyn.dat\"\n");
        exit(1);
    }

    Towar towar;
    while (1) {
        size_t ile = fread(&towar, sizeof(Towar), 1, fp);
        if (ile == 1) {
            printf("Nr: %d, Nazwa: %35s, Ilość w magazynie: %d\n", 
                towar.numer, towar.nazwa, towar.ilosc);
        } else {
            break;
        }
    }

    fclose(fp);

    return 0;
}

