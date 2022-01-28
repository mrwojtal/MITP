#include <string.h>
#include "sortstring.h"
                                                                      // insert sort algorythm for strings
void insert(char* tab[], int n) {
    int i, j;
    char* wyraz;
    for(i = 1; i < n; i++) {
        wyraz = tab[i];
        for (j = i - 1; j >= 0 && (strcmp(tab[j], wyraz)) > 0; j--) {
            tab[j + 1] = tab[j];
        }
        tab[j + 1] = wyraz;
    }
}
