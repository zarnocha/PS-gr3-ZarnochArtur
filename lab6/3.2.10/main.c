#include <stdio.h>
#include <stdlib.h>

// Napisz bezargumentow� funkcj�, kt�ra rezerwuje pami��
// dla pojedynczej zmiennej
// typu double i zwraca jako warto�� wska�nik do niej.

int* foo()
{
    return malloc(sizeof(double));
}

int main()
{
    printf("%p", foo());
    return 0;
}
