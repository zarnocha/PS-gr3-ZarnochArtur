#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹ liczbê ca³kowit¹ n i wypisuje
na standardowym wyjœciu sumê kwadratów liczb od 0 do n, czyli wartoœæ 0^2+ 1^2+ 3^2+...+n^2.
*/

int main()
{
    int n;
    printf("Prosze podac n: ");
    scanf("%d",&n);

    int wynik = 0;

    for(int i=0; i<=n; i++)
    {
        wynik += (i*i);
    }

    printf("Wynik: %d",wynik);
    return 0;
}
