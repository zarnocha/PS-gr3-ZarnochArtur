#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Podaj liczbe naturalna n: ");
    int n;
    scanf("%d",&n);

    if(n<0)
    {
        return -1;
    }

    float a;
    int ujemnych = 0;
    int podzielnych_przez_3 = 0;

    for(int i=0; i<n; i++)
    {
        printf("Podaj liczbe rzeczywista: ");
        scanf("%f",&a);

        int sufit = ceil(a);

        if(a<0)
        {
            ujemnych++;
        }
        if(sufit % 3 == 0)
        {
            podzielnych_przez_3++;
        }
    }
    printf("Liczb ujemnych: %d\nLiczb ktorych sufit podzielny przez 3: %d",ujemnych, podzielnych_przez_3);
    return 0;
}
