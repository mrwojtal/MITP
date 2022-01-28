#include "sortint.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
                                               // sorting dynamic array of integers
int main(int argc, char *argv[]) {
    int n=0;
    if (args(argc, argv) == 0) {
        printf("usage: ./zad18 -nvalue");
        printf("\nPossible values:");
        printf("\nselect - for select sort");
        printf("\nbubble - for bubble sort\n");
        return 0;
    }
    do {
        printf("Podaj ilosc cyfr:");
        scanf("%d", &n);
    } while (n <= 1);
    int *tab = (int *) malloc(sizeof(int) * n);
    if (tab == NULL) {
        printf("Blad alokacji pamieci\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Podaj %d liczbe:", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Tablica:\n");
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

     free(tab);
     tab=NULL;
}
