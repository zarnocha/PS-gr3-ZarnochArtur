#include <stdio.h>
#include <stdlib.h>
//(r,!)Napisz program, kt�ry wczytuje ze standardowego wej�cia liczb�wymiern� i wypisuje j� na standardowym wyj�ciu
int main()
{
    float liczba;
    printf("Prosze podac liczbe wymierna: ");
    scanf("%f",&liczba);
    printf("%f", liczba);
    return 0;
}
