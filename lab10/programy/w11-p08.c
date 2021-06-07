// Zerowanie pola ilosc w każdym towarze
// w magazynie towarów

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 23
#define MAX_PARTS 100

typedef struct {
    int numer;
    char nazwa[NAME_LEN + 1];
    int ilosc;
} Towar;

Towar magazyn[MAX_PARTS];

int main(void)
{
    FILE *fp;

    if ((fp = fopen("magazyn.dat", "r+")) == NULL) {
        fprintf(stderr, "Nie można otworzyć pliku \"magazyn.dat\"\n");
        exit(1);
    }

    size_t ile = fread(magazyn, sizeof(Towar), MAX_PARTS, fp);

    for (size_t j = 0; j < ile; ++j) {
        magazyn[j].ilosc = 0;
    }

    rewind(fp);
    fwrite(magazyn, sizeof(Towar), ile, fp);
    fclose(fp);

    return 0;
}

