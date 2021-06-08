#include <stdio.h>
#include <stdlib.h>

/*
Napisz funkcjê, która otrzymuje w argumencie napis i podmienia w nim wszystkie ma³e litery na du¿e litery.
Zak³adamy, ¿e napis przechowywany jest w tablicy o elementach typu char, sk³ada siê wy³¹cznie z liter ³aciñskich
i bia³ych znaków,
oraz ¿e system, na którym jest kompilowany i uruchamiany program, u¿ywa standardowego kodowania ASCII.
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
