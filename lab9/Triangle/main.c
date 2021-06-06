#include <stdio.h>
#include <stdlib.h>
#include "POINT.H"
#include <stdbool.h>
#include <math.h>

typedef struct Triangle{
    Point a;
    Point b;
    Point c;
} Triangle;

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy);
Triangle makeTrianglefromPoints(const Point *a, const Point *b, const Point *c);
void show(const Triangle *s);
double area(const Triangle *s);
void move(Triangle *s, int deltaX, int deltaY);

int main()
{
    Triangle trojkat1 = makeTriangle(3, 4, 5, 6, 7, 8);

    Point *p1 = malloc(sizeof(Point)); p1->x = 3; p1->y = 4;
    Point *p2 = malloc(sizeof(Point)); p2->x = 5; p2->y = 6;
    Point *p3 = malloc(sizeof(Point)); p3->x = 7; p3->y = 8;
    Triangle trojkat2 = makeTrianglefromPoints(p1, p2, p3);

    Triangle *trojkat3 = malloc(sizeof(Triangle));
    trojkat3->a.x = 1; trojkat3->a.y = 2;
    trojkat3->b.x = 0; trojkat3->b.y = 4;
    trojkat3->c.x = -3; trojkat3->c.y = -3;
    show(trojkat3);

    double pole = area(trojkat3);
    printf("\nPole trojkata3 = %.2f\n", pole);

    Triangle *trojkat4 = malloc(sizeof(Triangle));
    trojkat4->a.x = 0; trojkat4->a.y = 0;
    trojkat4->b.x = 0; trojkat4->b.y = 0;
    trojkat4->c.x = 0; trojkat4->c.y = 0;
    printf("\nTrojkat 4 przed 'move':\n"); show(trojkat4);
    move(trojkat4, 4, 7);
    printf("\nTrojkat 4 po 'move':\n"); show(trojkat4);


    return 0;
}

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy)
{
    struct Triangle temp;

    temp.a.x = ax;
    temp.a.y = ay;

    temp.b.x = bx;
    temp.b.y = by;

    temp.c.x = cx;
    temp.c.y = cy;

    return temp;
}

Triangle makeTrianglefromPoints(const Point *a, const Point *b, const Point *c)
{
    Triangle temp;
    temp.a = *a;
    temp.b = *b;
    temp.c = *c;
    return temp;
}

void show(const Triangle *s)
{
    printf("Punkt 1: <%d, %d>\n", s->a.x, s->a.y);
    printf("Punkt 2: <%d, %d>\n", s->b.x, s->b.y);
    printf("Punkt 3: <%d, %d>\n", s->c.x, s->c.y);
}

double area(const Triangle *s)
{
    //double pole = 0.5*(fabs((s->b.x - s->a.x)*(s->c.y - s->a.y) - (s->b.y - s->a.y)*(s->c.x - s->a.x) ));
    //return pole;
    return 0.5*(fabs((s->b.x - s->a.x)*(s->c.y - s->a.y) - (s->b.y - s->a.y)*(s->c.x - s->a.x) ));
}

void move(Triangle *s, int deltaX, int deltaY)
{
    s->a.x += deltaX;
    s->a.y += deltaY;

    s->b.x += deltaX;
    s->b.y += deltaY;

    s->c.x += deltaX;
    s->c.y += deltaY;
}
