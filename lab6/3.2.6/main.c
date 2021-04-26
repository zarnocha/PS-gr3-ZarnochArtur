#include <stdio.h>
#include <stdlib.h>

// Napisz funkcjê, której argumentami s¹ n typu int oraz w wskaŸnik
// do int, która przepisuje wartoœæ n do zmiennej wskazywanej przez w.

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
