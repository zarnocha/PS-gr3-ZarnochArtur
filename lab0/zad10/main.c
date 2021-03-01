#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Prosze podac ujemna liczbe: ");
    float x;
    scanf("%f", &x);
    printf("Wartosc bezwzgledna z %f to %f",x,fabsf(x));
    // fabs to abs dla float; fabs() is for doubles. fabsf() is for floats.
    return 0;
}
