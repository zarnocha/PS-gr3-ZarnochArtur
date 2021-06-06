#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include <stdbool.h>
//#include "point-2.c"
//#include "point-1.c"

typedef struct LineSegment{

Point a;
Point b;

} LineSegment;

LineSegment makeLineSegment(int ax, int ay, int bx, int by){
    LineSegment ->a = ax, bx;
    LineSegment ->b = ay, by;
}


int main()
{
    LineSegment odcinek = makeLineSegment(5, 6, 8, 10);
    //LineSegment makeLineSegmentfromPoints(const Point *a, const Point *b);
    //void show(const LineSegment *s);
    //double length(const LineSegment *s);
    //bool parallel(const LineSegment *s1, const LineSegment *s2);
    //bool perpendicular(const Segment *s1, const LineSegment *s2);
    //void move(LineSegment *s, int deltaX, int deltaY);

    return 0;
}
