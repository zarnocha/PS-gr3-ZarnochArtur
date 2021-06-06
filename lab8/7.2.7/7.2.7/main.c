#include <stdio.h>
#include <stdlib.h>

struct Zespolone{
    double re, im;
};

typedef struct Zespolone zesp;

zesp dodawanie(zesp first, zesp second)
{
    zesp tmp = {first.re + second.re, first.im + second.im};
    return tmp;
}

int main()
{
    zesp a = {5, 10};
    zesp b = {10, 20};
    zesp wynik = dodawanie(first, second);
    //printf("a.re - %f\na.im - %f\nb.re - %f\nb.im - %f",a.re,a.im, b.re, b.im);
    printf("Dodawanie:\Real %f + %f imaginary\n", result.re, result.im);
    return 0;
}
