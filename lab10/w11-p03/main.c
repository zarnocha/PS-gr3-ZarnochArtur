// gcc -std=gnu11 -Wall -Werror -pedantic w12-p03.c
//
// Nie nale¿y u¿ywaæ opcji -std=c11

// Poni¿sza definicja istotna w systemach 32-bitowych
#define _FILE_OFFSET_BITS 64

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc != 2) {
        printf("Sposób u¿ycia: %s nazwaPliku\n", argv[0]);
        exit(1);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Nie mo¿na otworzyæ pliku o nazwie %s\n", argv[1]);
        exit(2);
    }

    fseeko(fp, 0, SEEK_END);

    if (errno != 0) {
        perror("fseek");
        exit(3);
    }

    off_t len = ftello(fp);

    if (errno != 0) {
        perror("ftell");
        exit(4);
    }

    fclose(fp);
    printf("Wielkoœæ podanego pliku w bajtach: %ld\n", len);
    return 0;
}

