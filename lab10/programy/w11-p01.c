// Sprawdza, czy plik można otworzyć do odczytu 
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc != 2) {
        printf("Sposób użycia: %s <nazwa-pliku>\n", argv[0]);
        return 1;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Pliku %s nie można otworzyć.\n", argv[1]);
        return 2;
    }

    printf("Plik %s można otworzyć.\n", argv[1]);
    fclose(fp);
    return 0;
}

