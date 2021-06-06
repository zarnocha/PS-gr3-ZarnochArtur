// point.h
#ifndef POINT_H
#define POINT_H

typedef struct Point {
    int x, y;
} Point;

struct Point makePoint(int x, int y);

void showPoint(struct Point p);

void movePoint(struct Point *p, int deltaX, int deltaY);

double distance(struct Point p, struct Point q);

#endif
