#include <stdio.h>
#include "days.h"
                                                              // program is calculating number of days between two typed dates
int main() {
    printf("Podaj pierwsza date:");
    scanf("%2d%2d%4d", &DAY1.dzien, &DAY1.miesiac, &DAY1.rok);
    printf("Podaj druga date:");
    scanf("%2d%2d%4d", &DAY2.dzien, &DAY2.miesiac, &DAY2.rok);
    printf("Liczba dni: %d\n", days(DAY1, DAY2));
    return 0;
}
