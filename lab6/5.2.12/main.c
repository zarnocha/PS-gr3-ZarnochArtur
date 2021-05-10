#include <stdio.h>
#include <stdlib.h>

/*Napisz funkcj� wytnijzn, kt�ra dostaje jako argument dwa napisy
nap1 i nap2, i wycina z napisu nap1 wszystkie znaki niewyst�puj�ce
w napisie nap2. Napisz dwie wersje funkcji wytnijzn dla napis�w
sk�adaj�cych si� ze znak�w typu char i wchar_t.
*/

void wytnijzn(char nap1[], char nap2[], int len1, int len2)
{
    char nap3[1000];
    int k = 0;
    for(int i=0; i<len1; i++)
    {
        for(int j=0; j<len2; j++)
        {
            if(nap1[i] == nap2[j])
            {
                nap3[k] = nap1[i];
                k++;
            }
            else
            {
                break;
            }
        }
    }
    nap1 = nap3;
}

void wytnijznak(char nap1[], char nap2[], int len1, int len2)
{
    char nap3[1000];
    int k = 0;

    size_t len3 = sizeof(nap3)/sizeof(char);
    printf("\nlen3 %d\n", len3);

    for(int i=0; i<len1; i++)
    {
        for(int j=0; j<len2; j++)
        {
            if(nap1[i] != nap2[j])
            {
                continue;
            }
            else if(nap1[i] == nap2[j])
            {
                nap3[k] = nap1[i];
                k++;
            }
        }
    }

    nap1[1000] = nap3[1000];

}

int main()
{
    printf("Podaj nap1: ");
    char nap1[1000];    //bez rozmiaru nie dzialalo wprowadzanie z konsoli
    scanf("%s", nap1);
    printf("Nap1: %s\n", nap1);

    printf("Podaj nap2: ");
    char nap2[(sizeof(nap1))];
    scanf("%s", nap2);
    printf("Nap2: %s\n", nap2);

    size_t len1 = sizeof(nap1)/sizeof(char);
    size_t len2 = sizeof(nap2)/sizeof(char);

    printf("\nlen1: %d\n", len1);
    printf("\nlen2: %d\n", len2);

    wytnijznak(nap1, nap2, len1, len2);


    printf("Nap1 po wytnijzn: %s\n", nap1);
    return 0;
}
