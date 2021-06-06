#include <stdio.h>
#include <stdlib.h>
#include "POINT.H"
#include <stdbool.h>

typedef struct LineSegment{
    Point a;
    Point b;
} LineSegment;

LineSegment makeLineSegment(int ax, int ay, int bx, int by);
LineSegment makeLineSegmentfromPoints(const Point *a, const Point *b);
void show(const LineSegment *s);
double length(const LineSegment *s);
bool parallel(const LineSegment *s1, const LineSegment *s2);
bool perpendicular(const LineSegment *s1, const LineSegment *s2);

int main()
{
    Point p1 = makePoint(1, 2);
    printf("PUNKT 1:  ");
    showPoint(p1);
    Point p2 = makePoint(3, 4);
    printf("\nPUNKT 2:  ");
    showPoint(p2);

    LineSegment odc = makeLineSegment(2, 1, 3, 7); //ax, ay, bx, by
    //printf("\n\nODCINEK:\np1 = <%d, %d>\np2 = <%d, %d>\n", odc.a.x, odc.a.y, odc.b.x, odc.b.y);
    printf("\n\nODCINEK:\n"); printf("p1 = "); showPoint(odc.a); printf("\np2 = "); showPoint(odc.b); printf("\n");

    Point *p3 = malloc(2*sizeof(int)); p3->x = 1; p3->y = 4;
    Point *p4 = malloc(2*sizeof(int)); p4->x = 2; p4->y = 7;

    LineSegment odc2 = makeLineSegmentfromPoints(p3, p4);
    printf("\nODCINEK 2:\n"); printf("p1 = "); showPoint(odc2.a); printf("\np2 = "); showPoint(odc2.b); printf("\n");

    printf("\nmakeLineSegmentfromPoints\n");

    LineSegment *odc3 = malloc(sizeof(LineSegment));
    odc3->a = p1;
    odc3->b = p2;
    show(odc3);

    LineSegment *odc4 = malloc(sizeof(LineSegment));
    *odc4 = makeLineSegment(1, 2, 3, 4);
    LineSegment *odc5 = malloc(sizeof(LineSegment));
    *odc5 = makeLineSegment(1, 2, 3, 4);

    printf("\nDlugosc odc3: %.3f\n", length(odc3));

    printf("\nCzy odc4 i odc5 sa rownolegle?: %s\n", parallel(odc4, odc5) ? "Tak" : "Nie");

    return 0;
}

LineSegment makeLineSegment(int ax, int ay, int bx, int by)
{
    struct LineSegment temp;
    temp.a = makePoint(ax, ay);
    temp.b = makePoint(bx, by);
    return temp;
}

LineSegment makeLineSegmentfromPoints(const Point *a, const Point *b)
{
    struct LineSegment temp;
    temp.a = *a;
    temp.b = *b;
    return temp;
}

void show(const LineSegment *s)
{
    printf("Punkt 1:    x = %d, y = %d\nPunkt 2:    x = %d, y = %d\n", s->a.x, s->a.y, s->b.x, s->b.y);
}

double length(const LineSegment *s)
{
    return distance(s->a, s->b);
}

bool parallel(const LineSegment *s1, const LineSegment *s2)
{
    double a1 = (s1->b.y - s1->a.y)/(s1->b.x - s1->a.x);
    double a2 = (s2->b.y - s2->a.y)/(s2->b.x - s2->a.x);
    if(a1 == a2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool perpendicular(const LineSegment *s1, const LineSegment *s2)
{
    return true;
}
