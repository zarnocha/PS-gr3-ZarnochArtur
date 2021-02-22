#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Suma dni pierwszych trzech miesiecy dowolnego roku przestepnego.\n\n");

    printf("Podaj rok przestepny: ");
    int rok;
    scanf("%d",&rok);

    if(rok%4 != 0)
    {
        printf("Rok nie jest przestepny\n");
    }

    else
    {
    printf("\nWybrany rok przestepny: %d",rok);
        //printf("Wybrany rok: 2016\n");
    int styczen = 31; int luty = 29; int marzec = 31;
    printf("\nIlosc dni w styczniu: %d", styczen);
    printf("\nIlosc dni w lutym: %d", luty);
    printf("\nIlosc dni w marcu: %d", marzec);
    int suma = styczen+luty+marzec;
    printf("\n\nSuma wynosi: %d", suma);
    printf("\n ");
    }
    return 0;

}
/*
Uzyte zrodla:
//https://www.kalendarzswiat.pl/rok_przestepny
//http://www.cplusplus.com/reference/cstdio/printf/
//https://www.cplusplus.com/reference/cstdio/scanf/
*/
