#include <stdio.h>
#include <stdlib.h>

/*int porownaj(char *napis1, char *napis2)
{

    if(sizeof(napis1) != sizeof(napis2))
    {
        printf("Napisy NIE sa takie same.");
        return 0;
    }
    else
    {
        for(int i = 0; i<sizeof(*napis1); i++)
        {
            if(napis1[i] != napis2[i])
            {
                printf("Blad znakow.");
                return 0;
            }
        }
        return 1;
    }
}*/

int porownaj(const char* pierwszy, const char* drugi)
{
    int i = 0;
    while(pierwszy[i] != 0)
    {
        if(pierwszy[i] != drugi[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int porownaj_dwa(const char* pierwszy, const char* drugi, const int len_pierwszy, const int len_drugi)
{
    if(len_pierwszy != len_drugi)
    {
        return 0;
    }
    for(int i=0; i<len_pierwszy; i++)
    {
        if(pierwszy[i] != drugi[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char napis1[] = "Napis";
    char napis2[] = "testoawnie";

    size_t dlugosc1 = sizeof(napis1)/sizeof(char);
    size_t dlugosc2 = sizeof(napis2)/sizeof(char);
    printf("\nDlugosc 1 napisu: %d\n", dlugosc1);
    printf("\nDlugosc 2 napisu: %d\n", dlugosc2);

    int porownanie1 = porownaj(napis1, napis2);

    if(dlugosc1 == dlugosc2)
    {
        if(porownanie1 == 1)
        {
            printf("\nNapisy sa takie same.\n");
        }
        else
        {
            printf("\nNapisy nie sa takie same.\n");
        }
    }
    else
    {
        printf("\nNapisy sa rozne.\n");
    }

    int porownanie2 = porownaj_dwa(napis1, napis2, dlugosc1, dlugosc2);
    if(porownanie2 == 1)
    {
        printf("\nNapisy sa takie same.\n");
    }
    else
    {
        printf("\nNapisy sa rozne.\n");
    }


    return 0;
}
