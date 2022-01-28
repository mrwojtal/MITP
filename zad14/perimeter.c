#include <math.h>
#include "point.h"
                                                                  
float perimeter(struct POINT a, struct POINT b, struct POINT c) {
    float bok1 = sqrtf(powf(a.x - b.x, 2) + powf(a.y - b.y, 2));
    float bok2 = sqrtf(powf(a.x - c.x, 2) + powf(a.y - c.y, 2));
    float bok3 = sqrtf(powf(b.x - c.x, 2) + powf(b.y - c.y, 2));
    return bok1 + bok2 + bok3;
}
