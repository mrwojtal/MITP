#include "sortint.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
                                                          // sorting of integers with bubble and select sort
int main(int argc, char *argv[]) {
    int tab[10] = {8, 1, 3, 4, 9, 2, 12, 7, 6, 10};
    int n = sizeof(tab) / sizeof(int);
    if (args(argc, argv) == 0) {
        printf("usage: ./zad18 -nvalue");
        printf("\nPossible values:");
        printf("\nselect - for select sort");
        printf("\nbubble - for bubble sort\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
        printf("%d  ", tab[i]);
    printf("\n");

    if (args(argc, argv) == 1)
        bubble(tab, n);

    if (args(argc, argv) == 2)
        select(tab, n);

     for (int i = 0; i < n; i++)
            printf("%d  ", tab[i]);
        printf("\n");
}
