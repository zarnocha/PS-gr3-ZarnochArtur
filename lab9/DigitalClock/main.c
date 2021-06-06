#include <stdio.h>
#include <stdlib.h>

typedef struct DigitalClock{
    unsigned godzina;
    unsigned minuta;
} DigitalClock;

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta);
void increment(const DigitalClock *d, unsigned ileMinut);
void showDigitalClock(const DigitalClock d);
void showDigitalClockPointer(const DigitalClock *d);

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
    zegar3->godzina = 72;
    zegar3->minuta = 256;
    increment(zegar3, 60);
    printf("Zegar 3: "); showDigitalClockPointer(zegar3); printf("\n\n");

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
