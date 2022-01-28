#include <string.h>
#include "sortstring.h"

void bubble(char *tab[], int n) {
    int swapped;
    do  {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(tab[j], tab[j + 1]) > 0){
                char* temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}
