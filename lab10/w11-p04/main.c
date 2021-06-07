#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *wp;
    FILE *wp1;

    if (argc < 3) {
        fprintf(stderr, "Sposob uzycia: %s nazwa_pliku\n", argv[0]);
        exit(1);
    }

    for(int i=1; i<argc-1; i++)
    {
        wp = fopen(argv[i], "r");
        if (wp == NULL)
        {
            fprintf(stderr, "Nie mozna otworzyc %s\n", argv[i]);
            exit(2);
        }

        int ch;

        /*while ((ch = fgetc(wp)) != EOF)
        {
            fputc(ch, stdout);
            ++licznik;
        }*/
        wp1 = fopen(argv[i+1], "r");
        if (wp1 == NULL)
        {
            fprintf(stderr, "Nie mozna otworzyc pliku docelowego %s\n", argv[i+1]);
            exit(2);
        }

        wp1 = fopen(argv[i+1], "w+");
        while ((ch = fgetc(wp)) != EOF)
            {
                fputc(ch, wp1);
            }

        fclose(wp);
        fclose(wp1);
        fprintf(stderr, "%s skopiowany do %s\n", argv[i], argv[i+1]);
    }

    return 0;
}

