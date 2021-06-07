// Sprawdza, czy plik mo¿na otworzyæ do odczytu
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    if (argc < 2)
    {
            printf("Sposob uzycia: %s <nazwa-pliku>\n", argv[0]);
            return 1;
    }

    for(int i=1; i<argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL)
            {
                printf("Pliku %s nie mozna otworzyc.\n", argv[i]);
                fclose(fp);
            }
        else
            {
                printf("Plik %s mozna otworzyc.\n", argv[i]);
                fclose(fp);
            }
    }

    fclose(fp);
    return 0;
}

