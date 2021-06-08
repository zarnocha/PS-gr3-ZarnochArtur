#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1024

/*
Zdefiniuj stałą MAX_LEN, a następnie zdefiniuj C-strukturę Produkt o polach nazwa typu char[MAX_LEN],
cenaBrutto typu double oraz stawkaVAT typu float.

Zdefiniuj następujące funkcje:

Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT) x

Produkt makeProdukt1(const Produkt *produkt); x

double cenaNetto(const Produkt *produkt);

double kwotaVAT(const Produkt *produkt);

void show(const Produkt *produkt);
Napisz program testujący napisane funkcje.

*/

typedef struct Produkt{
	char nazwa[MAX_LEN];
	double cenaBrutto;
	float stawkaVAT;
} Produkt;

Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
{
	Produkt temp;
	strcpy(temp.nazwa, nazwa);
	temp.cenaBrutto = cenaBrutto;
	temp.stawkaVAT = stawkaVAT;
	return temp;
}

Produkt makeProdukt1(const Produkt *produkt)
{
	return *produkt;
}


void show(const Produkt *produkt)
{
	printf("\nNazwa: %s", produkt->nazwa);
	printf("\nCena brutto: %0.2f", produkt->cenaBrutto);
	printf("\nStawka VAT: %0.2f", produkt->stawkaVAT);
}

double cenaNetto(const Produkt *produkt)
{
	return ((produkt->cenaBrutto) / (1+ (produkt->stawkaVAT/100)));
}

double kwotaVAT(const Produkt *produkt)
{
	return (produkt->cenaBrutto - cenaNetto(produkt));
}

int main()
{
	Produkt pr1 = makeProdukt("Produkt 1", 66.70, 23);

	Produkt pr2 = makeProdukt1(&pr1);		//zapomnialem o mozliwosci dodania ampersanda do argumentu
	strcpy(pr2.nazwa, "Produkt 2");
	pr2.cenaBrutto = 23.30;
	pr2.stawkaVAT = 11;

	show(&pr1);
	printf("\n");

	show(&pr2);
	printf("\n");

	printf("\n");

	double Netto = cenaNetto(&pr2);
	double VAT = kwotaVAT(&pr2);

	printf("Cena netto pr2: %f", Netto);
	printf("\nKwota VAT pr2: %f\n", VAT);


    return 0;
}
