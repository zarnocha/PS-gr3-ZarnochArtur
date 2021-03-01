#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double liczba;
    printf("Prosze podac liczbe: ");
    scanf("%lf",&liczba);
    printf("Pierwiastek z %lf to %lf",liczba,sqrt(liczba));
    return 0;
}
