#include <stdio.h>
#include <stdlib.h>

/*Napisz funkcjê wytnijzn, która dostaje jako argument dwa napisy
nap1 i nap2, i wycina z napisu nap1 wszystkie znaki niewystêpuj¹ce
w napisie nap2. Napisz dwie wersje funkcji wytnijzn dla napisów
sk³adaj¹cych siê ze znaków typu char i wchar_t.
*/

void wytnijznaki(char nap1[], char nap2[], size_t len1, size_t len2)
{
    char nap3[1000];
    int k = 0;

    size_t len3 = sizeof(nap3) / sizeof(char);

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (nap1[i] != nap2[j])
            {
                continue;
            }
            else if (nap1[i] == nap2[j])
            {
                nap3[k] = nap1[i];
                k++;
                break;
            }
        }
    }

    // printf("nap3: %s", nap3);
    for (int i = 0; i < len3; i++)
    {
        nap1[i] = nap3[i];
    }

}

int main()
{
    printf("Podaj nap1: ");
    char nap1[1000];    //bez rozmiaru nie dzialalo wprowadzanie z konsoli
    scanf("%s", nap1);
    printf("Nap1: %s\n", nap1);

    printf("\nPodaj nap2: ");
    char nap2[1000];
    scanf("%s", nap2);
    printf("Nap2: %s\n", nap2);

    size_t len1 = sizeof(nap1) / sizeof(char);
    size_t len2 = sizeof(nap2) / sizeof(char);
    len1 = sizeof(nap1);

    wytnijznaki(nap1, nap2, len1, len2);

    printf("\nNap1 po wytnijzn: %s\n", nap1);
    return 0;
}
