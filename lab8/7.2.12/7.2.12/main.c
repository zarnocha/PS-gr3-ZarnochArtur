#include <stdio.h>
#include <stdlib.h>

struct zespolone{

    union Liczba{
    int re;
    int im;
    };

    union Liczba liczba;
};

int main()
{
    numer = zespolone.liczba;
    numer.re = 5;
    numer.im = 7;
    return 0;
}
