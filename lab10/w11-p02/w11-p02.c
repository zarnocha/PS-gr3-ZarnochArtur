#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Sposób użycia: %s nazwaPliku\n", argv[0]);
        exit(1);
    }

    FILE* fp;
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Nie można otworzyć pliku o nazwie %s\n", argv[1]);
        exit(2);
    }

    fseek(fp, 0, SEEK_END);

    if (errno != 0) {
        perror("fseek");
        exit(3);
    }

    long len = ftell(fp);

    if (errno != 0) {
        perror("ftell");
        exit(4);
    }

    fclose(fp);
    printf("Wielkość podanego pliku w bajtach: %ld\n", len);
    return 0;
}

