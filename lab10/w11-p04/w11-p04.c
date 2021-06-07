#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *wp;
    long licznik = 0;

    if (argc != 2) {
        fprintf(stderr, "Sposób użycia: %s nazwa_pliku\n", argv[0]);
        exit(1);
    }

    if ((wp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Nie można otworzyć %s\n", argv[1]);
        exit(2);
    }

    int ch;

    while ((ch = fgetc(wp)) != EOF) {
        fputc(ch, stdout);
        ++licznik;
    }

    fclose(wp);
    fprintf(stderr, "Plik %s zawiera %ld znaków\n", argv[1], licznik);
    return 0;
}

