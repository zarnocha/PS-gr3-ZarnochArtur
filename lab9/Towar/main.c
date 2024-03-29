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
Towar makeTowarCopy(const Towar *towar);

void show(const Towar *towar);
void showStruct(Towar towar);

void nazwanieTowaru(Towar *towar, char *tekst);

double cenaNetto(const Towar *towar);
double kwotaVAT(const Towar *towar);

int main()
{
    Towar towar1 = makeTowar("Cookies", 55.60, 23.59);
    //printf("Towar 1:\nNazwa: %s\nCena brutto: %.2f\nStawka VAT: %.2f\n", towar1.nazwa, towar1.cenaBrutto, towar1.stawkaVAT);
    printf("Towar 1:\n");
    showStruct(towar1);

    Towar *towar2 = malloc(sizeof(Towar));
    char *nazwa_towar2 = "Coca-Cola";
    nazwanieTowaru(towar2, nazwa_towar2);
    towar2->cenaBrutto = 13.37;
    towar2->stawkaVAT = 21.37;
    printf("\nTowar 2:\n");
    show(towar2);

    Towar towar3 = makeTowarCopy(towar2);
    printf("\nTowar 3:\n");
    showStruct(towar3);

    Towar *towar4 = malloc(sizeof(Towar));
    char *nazwa_towar4 = "Lasagne";
    nazwanieTowaru(towar4, nazwa_towar4);
    towar4->cenaBrutto = 12300;
    towar4->stawkaVAT = 23;
    printf("\nTowar 4:\n");
    show(towar4);

    printf("\nCena netto: %.2f PLN",  cenaNetto(towar4));
    printf("\nKwota VAT: %.2f PLN\n", kwotaVAT(towar4));

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

Towar makeTowarCopy(const Towar *towar)
{
    Towar temp;
    for(int i=0; i<strlen(towar->nazwa); i++)
    {
        temp.nazwa[i] = towar->nazwa[i];
    }
    temp.cenaBrutto = towar->cenaBrutto;
    temp.stawkaVAT = towar->stawkaVAT;
    return temp;
}

void show(const Towar *towar)
{
    printf("Nazwa: %s\nCena brutto: %.2f PLN\nStawka VAT: %.2f%%\n", towar->nazwa, towar->cenaBrutto, towar->stawkaVAT);
}

void showStruct(const Towar towar)
{
    printf("Nazwa: %s\nCena brutto: %.2f PLN\nStawka VAT: %.2f%%\n", towar.nazwa, towar.cenaBrutto, towar.stawkaVAT);
}

void nazwanieTowaru(Towar *towar, char *tekst)
{
    for(int i=0; i < strlen(tekst); i++)
    {
        towar->nazwa[i] = tekst[i];
    }
}

double cenaNetto(const Towar *towar)
{
    return ( (towar->cenaBrutto) / (1+ (towar->stawkaVAT/100)) );
}
double kwotaVAT(const Towar *towar)
{
    return (towar->cenaBrutto - cenaNetto(towar));
}
