#include <stdio.h>
#include <stdlib.h>

// Napisz bezargumentow¹ funkcjê, która rezerwuje pamiêæ
// dla pojedynczej zmiennej
// typu double i zwraca jako wartoœæ wskaŸnik do niej.

int* foo()
{
    return malloc(sizeof(double));
}

int main()
{
    printf("%p", foo());
    return 0;
}
