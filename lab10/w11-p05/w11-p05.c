#include <stdio.h>

// stała MAXWIERSZ powinna mieć wartość co najmniej 2

#define MAXWIERSZ 64 

int main(void)
{
    char wiersz[MAXWIERSZ];
    while (fgets(wiersz, MAXWIERSZ, stdin) != NULL) {
        fputs(wiersz, stdout);
    }
    return 0;
}

