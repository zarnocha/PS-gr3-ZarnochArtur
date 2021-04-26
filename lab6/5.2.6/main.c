#include <stdio.h>
#include <stdlib.h>

// Napisz funkcj� kopiujn, kt�ra dostaje w argumentach dwie tablice
// znak�w nap1, nap2 oraz liczb� n i przekopiowuje n pierwszych znak�w
// z napisu przechowywanego w tablicy nap1 do tablicy nap2.
// W przypadku gdy napis w tablicy nap1 jest kr�tszy ni� n znak�w, funkcja
// powinna po prostu przepisa� ca�y napis. Funkcja powinna zadba� o to,
// �eby na ko�cu napisu w tablicy nap2 znalaz� si� znak o kodzie 0.
// Zak�adamy, �e w docelowej tablicy jest wystarczaj�co du�o miejsca.
// Napisz dwie wersje funkcji: dla napis�w sk�adaj�cych si� ze znak�w
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
