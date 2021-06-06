#include <stdio.h>
#include <stdlib.h>

typedef struct DigitalClock{
    unsigned godzina;
    unsigned minuta;
} DigitalClock;

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta);

void increment(const DigitalClock *d, unsigned ileMinut);
void incrementMinute(const DigitalClock *d);

void showDigitalClock(const DigitalClock d);
void showDigitalClockPointer(const DigitalClock *d);

void decrement(const DigitalClock *d, unsigned ileMinut);
void decrementMinute(const DigitalClock *d);

int main()
{
    DigitalClock *zegar1 = malloc(sizeof(DigitalClock));
    zegar1->godzina = 64;
    zegar1->minuta = 128;
    printf("Zegar 1: ");
    showDigitalClockPointer(zegar1);
    printf("\n\n");

    DigitalClock zegar2 = makeDigitalClock(64, 128);
    printf("Zegar 2: "); showDigitalClock(zegar2); printf("\n\n");


    DigitalClock *zegar3 = malloc(sizeof(DigitalClock));
    zegar3->godzina = 88;
    zegar3->minuta = 666;
    increment(zegar3, 60);
    printf("Zegar 3: "); showDigitalClockPointer(zegar3); printf("\n");

    incrementMinute(zegar3);
    printf("Zegar 3 minute pozniej: "); showDigitalClockPointer(zegar3); printf("\n\n");

    DigitalClock *zegar4 = malloc(sizeof(DigitalClock));
    zegar4->godzina = 23;
    zegar4->minuta = 17;
    decrement(zegar4, 122); //odejmujemy 122 minuty, ma wyjsc 21:15
    printf("Zegar 4: "); showDigitalClockPointer(zegar4); printf("\n");

    DigitalClock *zegar5 = malloc(sizeof(DigitalClock));
    zegar5->godzina = 0;  //kom.2:  dzia³a tak samo (dobrze) dla 01, 02.
    zegar5->minuta = 17;
    decrement(zegar5, 122); //kom.1:    test dla godziny 00, unikam przekrêcenia siê zegara. w stylu: od godziny 00 odejmij 2 godziny -> 23, 22. tego nie chcê, wiêc zablokowa³em to w f-cji.
    printf("Zegar 5: "); showDigitalClockPointer(zegar5); printf("\n");

    DigitalClock *zegar6 = malloc(sizeof(DigitalClock));
    zegar6->godzina = 128;
    zegar6->minuta = 218;
    decrementMinute(zegar6);
    printf("Zegar 6: "); showDigitalClockPointer(zegar6); printf("\n");

    return 0;
}

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta)
{
    DigitalClock temp;
    if(godzina>23)
    {
        while(godzina>23)
        {
            godzina -= 24;
        }
    }
    if(minuta>59)
    {
        int dodawanie = 0;
        while(minuta>59)
        {
            minuta -= 60;
            dodawanie ++;
        }
        godzina += dodawanie;
    }

    temp.godzina = godzina;
    temp.minuta = minuta;
    return temp;
}

void increment(const DigitalClock *d, unsigned ileMinut)
{
    DigitalClock *wsk = d;
    if(wsk->godzina>23)
    {
        while(wsk->godzina>23)
        {
            wsk->godzina -= 24;
        }
    }
    if(wsk->minuta>59)
    {
        int dodawanie = 0;
        while(wsk->minuta>59)
        {
            wsk->minuta -= 60;
            dodawanie ++;
        }
        wsk->godzina += dodawanie;
    }

    if(ileMinut>59)
    {
        int dodawanie = 0;
        while(ileMinut>59)
        {
            ileMinut -= 60;
            dodawanie ++;
        }
        wsk->godzina += dodawanie;
    }
    d = wsk;
}

void showDigitalClock(const DigitalClock d)
{
    if(d.minuta < 10)
    {
        if(d.godzina<10)
        {
            printf("0%d:0%d", d.godzina, d.minuta);
        }
        else printf("%d:0%d", d.godzina, d.minuta);
    }
    else
    {
        if(d.godzina<10)
        {
            printf("0%d:%d\n", d.godzina, d.minuta);
        }
        else printf("%d:%d\n", d.godzina, d.minuta);
    }
}

void showDigitalClockPointer(const DigitalClock *d)
{
    DigitalClock *wsk = d;
    if(wsk->godzina>23)
    {
        while(wsk->godzina>23)
        {
            wsk->godzina -= 24;
        }
    }
    if(wsk->minuta>59)
    {
        int dodawanie = 0;
        while(wsk->minuta>59)
        {
            wsk->minuta -= 60;
            dodawanie ++;
        }
        wsk->godzina += dodawanie;
    }


    if(wsk->minuta < 10)
    {
        if(wsk->godzina<10)
        {
            printf("0%d:0%d", wsk->godzina, wsk->minuta);
        }
        else printf("%d:0%d", wsk->godzina, wsk->minuta);
    }
    else
    {
        if(wsk->godzina<10)
        {
            printf("0%d:%d\n", wsk->godzina, wsk->minuta);
        }
        else printf("%d:%d\n", wsk->godzina, wsk->minuta);
    }
}

void incrementMinute(const DigitalClock *d)
{
    DigitalClock *wsk = d;
    wsk->minuta += 1;       //serce funkcji

    if(wsk->godzina>23)
    {
        while(wsk->godzina>23)
        {
            wsk->godzina -= 24;
        }
    }
    if(wsk->minuta>59)
    {
        int dodawanie = 0;
        while(wsk->minuta>59)
        {
            wsk->minuta -= 60;
            dodawanie ++;
        }
        wsk->godzina += dodawanie;
    }
    d = wsk;
}

void decrement(const DigitalClock *d, unsigned ileMinut)
{
    DigitalClock *wsk = d;

    if(wsk->minuta < ileMinut)
    {
        int odejmowanie = 0;
        while(ileMinut>59)
        {
            ileMinut -= 60;
            odejmowanie++;
        }
        if(wsk->godzina > odejmowanie)
        {
            wsk->godzina -= odejmowanie;
        }
        else
        {
            wsk->godzina = 0;
        }
    }
    wsk->minuta -= ileMinut;

    if(wsk->godzina>23)
    {
        while(wsk->godzina>23)
        {
            wsk->godzina -= 24;
        }
    }
    if(wsk->minuta>59)
    {
        int dodawanie = 0;
        while(wsk->minuta>59)
        {
            wsk->minuta -= 60;
            dodawanie ++;
        }
        wsk->godzina += dodawanie;
    }

    if(ileMinut>59)
    {
        int dodawanie = 0;
        while(ileMinut>59)
        {
            ileMinut -= 60;
            dodawanie ++;
        }
        wsk->godzina += dodawanie;
    }
    d = wsk;
}

void decrementMinute(const DigitalClock *d) //testowalem kilkukrotnie na 00:00
{
    DigitalClock *wsk = d;
    if(wsk->minuta > 0)
        wsk->minuta -= 1;
    else
    {
        wsk->minuta = 0;   //mialem dylemat czy po odjeciu minuty od 00:00 zrobic 23:59 czy zostawic to 00:00, zdecydowalem, ze skoro wczesniej nie obracalem zegarka, to tu tez go nie obroce, zostawiam 00:00.
        if(wsk->godzina > 0)
            wsk->godzina -= 1;
        else
        {
            wsk->godzina = 0;
        }
    }
    if(wsk->godzina>23)
    {
        int zmienna = wsk->godzina;
        while(zmienna>23)
        {
            zmienna -= 24;
        }
        if(zmienna > 0)
        {
            wsk->godzina -= zmienna;
        }
        else
        {
            wsk->godzina = 0;
        }
    }
    if(wsk->minuta > 59)
    {
        int odejmowanie = 0;
        while(wsk->minuta > 59)
        {
            wsk->minuta -= 60;
            odejmowanie++;
        }
        wsk->godzina -= odejmowanie;
    }

    d = wsk;
}
