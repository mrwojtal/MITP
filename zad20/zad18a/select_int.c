#include "sortint.h"
                                      // select sort algorythm
void select(int tab[], int n) {
 int i, j;
 int min = 0;
    for (i = 0; i < n-1; i++) {
        min  = i;
        for (j = i+1; j < n; j++)
        if (tab[j] < tab[min])
            min = j;
        if (min != i) {
           int temp = tab[i];
           tab[i] = tab[min];
           tab[min] = temp;
        }
    }
}
