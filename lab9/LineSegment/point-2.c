// point.cc
#include <stdio.h>
#include <math.h>
#include "point.h"

void movePoint(struct Point *p, int deltaX, int deltaY)
{
    p->x += deltaX;
    p->y += deltaY;
}

double square(double a)
{
    return a * a;
}

double distance(struct Point p, struct Point q)
{
    return sqrt(square(p.x - q.x) + square(p.y - q.y));
}
