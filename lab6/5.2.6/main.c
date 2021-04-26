#include <stdio.h>
#include <stdlib.h>

// Napisz funkcjê kopiujn, która dostaje w argumentach dwie tablice
// znaków nap1, nap2 oraz liczbê n i przekopiowuje n pierwszych znaków
// z napisu przechowywanego w tablicy nap1 do tablicy nap2.
// W przypadku gdy napis w tablicy nap1 jest krótszy ni¿ n znaków, funkcja
// powinna po prostu przepisaæ ca³y napis. Funkcja powinna zadbaæ o to,
// ¿eby na koñcu napisu w tablicy nap2 znalaz³ siê znak o kodzie 0.
// Zak³adamy, ¿e w docelowej tablicy jest wystarczaj¹co du¿o miejsca.
// Napisz dwie wersje funkcji: dla napisów sk³adaj¹cych siê ze znaków
// typu char i wchar_t.

void kopiujn(char nap1[], char nap2[], int liczba_n, int len1)
{
  int i;

  if(len1 < liczba_n)
  {
      for(i = 0; i < len1; i++)
      {
          nap2[i] = nap1[i];
      }
      nap2[++i] = '0';
  }
  else
  {
      for(i = 0; i < liczba_n; i++)
      {
          nap2[i] = nap1[i];
      }
      nap2[++i] = '0';
  }
}

int main()
{
    char nap1[] = "zero";
    printf("Nap1: %s\n", nap1);

    char nap2[(sizeof(nap1)+1)];

    printf("Podaj liczbe n: ");
    int liczba_n;
    scanf("%d", &liczba_n);

    size_t len1 = sizeof(nap1)/sizeof(char);

    printf("Nap2 (przed): %s\n", nap2);
    kopiujn(nap1, nap2, liczba_n, len1);
    printf("Nap2 (po): %s\n", nap2);

    return 0;
}
