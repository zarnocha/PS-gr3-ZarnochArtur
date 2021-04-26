#include <stdio.h>
#include <stdlib.h>

double* foo(unsigned int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    printf("%p", foo(5));
    return 0;
}
