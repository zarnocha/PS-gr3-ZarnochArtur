#include <stdio.h>
#include <stdlib.h>

struct Student
{
    /*char imie[0];
    char nazwisko[0];
    char adres[0];
    char pesel[0];
    char kierunek[0];
    char legitymacja[0];*/
    char *imie;
    char *nazwisko;
    char *adres;
    unsigned long long int pesel;
    char *kierunek;
    unsigned long long int legitymacja;

};

typedef struct Student stu;

void foo(stu *wsk)
{
    printf("Podaj imie: ");
    scanf("%s", &wsk -> imie);

    printf("Podaj nazwisko: ");
    scanf("%s", &wsk -> nazwisko);

    printf("Podaj adres: ");
    scanf("%s", &wsk -> adres);

    printf("Podaj pesel: ");
    scanf("%llu", &wsk -> pesel);

    printf("Podaj kierunek: ");
    scanf("%s", &wsk -> kierunek);

    printf("Podaj legit: ");
    scanf("%llu", &wsk -> legitymacja);
}

int main()
{
    /*stu uczen;
    uczen.imie = "imie";
    uczen.nazwisko = "nazwisko";
    uczen.adres = "adres";
    uczen.pesel = 9999999999;
    uczen.kierunek = "informatyka";
    uczen.legitymacja = 1992642;
    printf("imie: %s\n", uczen.imie);
    printf("nazwisko: %s\n", uczen.nazwisko);
    printf("adres: %s\n", uczen.adres);
    printf("pesel: %d\n", uczen.pesel);
    printf("kierunek: %s\n", uczen.kierunek);
    printf("legitymacja: %d\n", uczen.legitymacja);*/

    stu uczen_pierwszy;
    foo(&uczen_pierwszy);
    printf("\nimie: %s\n", &uczen_pierwszy.imie);
    printf("nazwisko: %s\n", &uczen_pierwszy.nazwisko);
    printf("adres: %s\n", &uczen_pierwszy.adres);
    printf("pesel: %llu\n", &uczen_pierwszy.pesel);
    printf("kierunek: %s\n", &uczen_pierwszy.kierunek);
    printf("legitymacja: %llu\n", &uczen_pierwszy.legitymacja);
    return 0;
}
