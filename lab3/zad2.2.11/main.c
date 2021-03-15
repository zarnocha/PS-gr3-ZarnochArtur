#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pierwiastek(int n)
{
    for(int i = 1; i<n; i++)
    {
        if(i*i == n)
        {
            return i;
        }
    }
    if(n == 1)
    {
        return 1;
    }
    return -1;
}

int suma_calkowitych(int n)
{
    int suma = 0;
    for(int i=0; i<=n; i++)
    {
        if(pierwiastek(i) != -1)
        {
            suma += sqrt(i);
        }
    }
    return suma;
}

float suma_pierwiastkow(int n)
{
    float suma = 0;
    for(int i=1; i<=n; i++)
    {
        if(pierwiastek(i) == -1)
        {
            suma += sqrt(i);
        }
    }
    return suma;
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita n: ");
    scanf("%d",&n);
    if(n<0) return -1;
    float suma = suma_calkowitych(n) + suma_pierwiastkow(n);
    printf("Suma pierwiastkow wynosi: %f",suma);
    return 0;
}
