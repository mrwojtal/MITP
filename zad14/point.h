#ifndef _POINT_H
#define _POINT_H

struct POINT;

float area(struct POINT, struct POINT, struct POINT);

float perimeter(struct POINT, struct POINT, struct POINT);

struct POINT {
    float x;
    float y;
}


#endif //_POINT_H
