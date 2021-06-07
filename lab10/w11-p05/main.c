#include <stdio.h>

// sta³a MAXWIERSZ powinna mieæ wartoœæ co najmniej 2

#define MAXWIERSZ 64

int main(void)
{
    char wiersz[MAXWIERSZ];

    FILE *wp;
    FILE *wp1;
    wp = fopen("Tekst.txt", "r");
    wp1 = fopen("Kopia1.txt", "r");

    if (wp1 == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc pliku docelowego.\n");
        printf("Tworze nowy plik docelowy.\n");
    }

    wp1 = fopen("Kopia1.txt", "w+");

    fgets(wiersz, MAXWIERSZ, wp);

    fclose(wp);

    fputs(wiersz, wp1);
    fclose(wp1);

    printf("Kopiowanie zakonczone sukcesem.\n");

    return 0;
}

