// point.cc
#include <stdio.h>
#include <math.h>
#include "point.h"

Point makePoint(int x, int y)
{
    struct Point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

void showPoint(struct Point p)
{
    printf("<%d, %d>", p.x, p.y);
}
