#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1; i<=10; i++)
    {
        printf("%d", i);
        if(i<10)
        printf(" * ");
    }
    return 0;
}
