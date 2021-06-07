#include <stdio.h>

// stala MAXWIERSZ powinna miec wartosc co najmniej 2

#define MAXWIERSZ 512

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Sposob uzycia: %s nazwa_pliku\n", argv[0]);
        exit(1);
    }

    char wiersz[MAXWIERSZ];

    FILE *wp;
    FILE *wp1;
    wp = fopen(argv[1], "r");
    wp1 = fopen(argv[2], "r");

    if (wp == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc %s\n", argv[1]);
        exit(2);
    }

    if (wp1 == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc pliku docelowego.\n\n");
        printf("Tworze nowy plik docelowy.\n");
        fclose(wp1);
    }

    wp1 = fopen(argv[2], "w+");

    //fgets(wiersz, MAXWIERSZ, wp); //na fread
    fread(&wiersz, 1, MAXWIERSZ, wp);
    //fclose(wp);

    //fputs(wiersz, wp1); //na fwrite

    fwrite(&wiersz, 1, MAXWIERSZ, wp1);

    fclose(wp1);

    printf("\nKopiowanie zakonczone sukcesem.\n");

    return 0;
}

