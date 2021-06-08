#include <stdio.h>
#include <stdlib.h>

/*
Napisz funkcj�, kt�ra otrzymuje w argumencie napis i podmienia w nim wszystkie ma�e litery na du�e litery.
Zak�adamy, �e napis przechowywany jest w tablicy o elementach typu char, sk�ada si� wy��cznie z liter �aci�skich
i bia�ych znak�w,
oraz �e system, na kt�rym jest kompilowany i uruchamiany program, u�ywa standardowego kodowania ASCII.
*/

void upper(char *napis)
{
    int i = 0;
    while(napis[i] != 0)
    {
        if(napis[i] >= 97 && napis[i] <= 122)
		{
			napis[i] = napis[i] - 32;
		}
        i++;
    }
}

int main()
{
    char napis[5] = "abcd";
    printf("Maly napis: %s\n", napis);
    upper(napis);
    printf("Duzy napis: %s\n", napis);
    return 0;
}
