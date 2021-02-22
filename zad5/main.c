#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5. Napisz program, który wyœwietla na ekranie nazwê wewn¹trz ramki, np.: Java . U¿yj takich znaków jak:|, -, +.

    printf("+--------+\n");
    printf("|  Java  |\n");
    printf("");
    printf("+--------+\n");

    //Dodatkowe zadanie.

    char text[5];
    printf("\nPodaj tekst do wprowadzenia (czteroznakowy! / 4 znaki)\n");
    fgets(text, 5, stdin);
    printf("\n+--------+\n");
    printf("|  %s",text);
    printf("  |\n");
    printf("+--------+\n");
    return 0;
}
