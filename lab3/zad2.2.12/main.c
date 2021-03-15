#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sprawdzenie(int n)
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
        if(sprawdzenie(i) != -1)
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
        if(sprawdzenie(i) == -1)
        {
            suma += sqrt(i);
        }
    }
    return suma;
}


float pierwiastek(int n, int m)
{
	return pow(n,1/m);
}



int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    int m;
    printf("Podaj m: ");
    scanf("%d",&m);
    float k = pierwiastek(n,m);
    printf("Pierwiastek %d stopnia z %d wynosi %f",n,m,k);
    return 0;
}
