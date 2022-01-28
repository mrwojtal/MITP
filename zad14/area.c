#include "point.h"
                                                                  // calculating area with co-ordinates
float area(struct POINT a, struct POINT b, struct POINT c) {
    int t = (b.x - a.x)*(c.y - a.y)-(b.y - a.y)*(c.x - a.x);
    return  (wyznacznik < 0 ? -wyznacznik/2.0 : wyznacznik/2.0);
}
