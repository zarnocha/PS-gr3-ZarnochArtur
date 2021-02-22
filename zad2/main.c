#include <stdio.h>
#include <stdlib.h>
//Napisz program, który wypisuje sumê pierwszych dziesiêciu liczb ca³kowitych dodatnich,1 + 2 +...+ 10.

int main()
{
    int suma = 0;
    for(int i=1; i<=10; i++)
    {
        suma +=i;
        printf("%d", i);
        if(i<10)
        printf(" + ");
        else
        printf(" = ");

    }
    printf("%d", suma);
    return 0;
}
