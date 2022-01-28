#include <stdio.h>
#include "point.h"
                                                  // program calculates area and perimeter of triangle based on its co-ordinates
int main() {
    printf("Podaj punkt trojkata:");
    scanf("%f %f", &P1.x, &P1.y);
    printf("Podaj punkt trojkata:");
    scanf("%f %f", &P2.x, &P2.y);
    printf("Podaj punkt trojkata:");
    scanf("%f %f", &P3.x, &P3.y);
    printf("Obwod:%f\n", perimeter(P1, P2, P3));
    printf("Pole:%f\n", area(P1, P2, P3));
    return 0;
}
