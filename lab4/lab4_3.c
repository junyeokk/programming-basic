#include <stdio.h>

typedef struct {
    double x;
    double y;
} point;

typedef struct {
    double slope;
    double yintersect;
} line;

void setLineSlope(line *l, point *p1, point *p2) { l->slope = (p2->y - p1->y) / (p2->x - p1->x); }

void setLineIntersect(line *l, point *p1, point *p2) { l->yintersect = p1->y - l->slope * p1->x; }

int main() {
    point p1, p2;
    line l1;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    setLineSlope(&l1, &p1, &p2);
    setLineIntersect(&l1, &p1, &p2);

    printf("%.1lf %.1lf\n", l1.slope, l1.yintersect);
}