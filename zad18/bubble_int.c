#include "sortint.h"
                                              // optimal bubble sort of integers
void bubble(int tab[], int n) {
    int swapped;  
    do {
        swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(tab + j) < *(tab + j + 1)) {
                int swap = *(tab + j + 1);
                *(tab + j + 1) = *(tab + j);
                *(tab + j) = swap;
                swapped = 1
            }
        }
    } while (swapped);
}
