#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saldo = 1000;
    printf("Poczatkowe saldo konta: %d", saldo);
    saldo *= 1.06;
    printf("\n\nSaldo konta po pierwszym roku: %d", saldo);
    saldo *= 1.06;
    printf("\nSaldo konta po drugim roku: %d", saldo);
    saldo *= 1.06;
    printf("\nSaldo konta po trzecim roku: %d", saldo);

    printf("\n ");
    return 0;
}
