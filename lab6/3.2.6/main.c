#include <stdio.h>
#include <stdlib.h>

// Napisz funkcj�, kt�rej argumentami s� n typu int oraz w wska�nik
// do int, kt�ra przepisuje warto�� n do zmiennej wskazywanej przez w.

void foo(int n, int * w)
{
    *w = n;
    //return *w;
}

int main()
{
    int zmienna;
    int *w;
    w = &zmienna;

    int liczba = 15;
    foo(liczba, w);

    //zmienna = *w;
    printf("%d",zmienna);
    return 0;
}
