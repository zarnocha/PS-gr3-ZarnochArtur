#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1024

typedef struct Towar{
    double cenaBrutto;
    float stawkaVAT;
    char nazwa[MAX_LEN];
} Towar;

Towar makeTowar(const char *nazwa, double cenaBrutto, float stawkaVAT);

int main()
{
    Towar towar1 = makeTowar("Cookies", 55.60, 23.59);
    printf("Towar 1:\nNazwa: %s   Cena brutto: %.2f   Stawka VAT: %.2f\n", towar1.nazwa, towar1.cenaBrutto, towar1.stawkaVAT);

    return 0;
}

Towar makeTowar(const char *nazwa, double cenaBrutto, float stawkaVAT)
{
    Towar temp;

    for(int i=0; i<strlen(nazwa); i++)
    {
        temp.nazwa[i] = nazwa[i];
    }
    temp.cenaBrutto = cenaBrutto;
    temp.stawkaVAT = stawkaVAT;
    return temp;
}
