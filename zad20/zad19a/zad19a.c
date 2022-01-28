#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "sortstring.h"

int main(int argc, char* argv[] ) {

    if(args(argc, argv) == 0){
        printf("usage: ./zad18 -nvalue");
        printf("\nPossible values:");
        printf("\ninsert - for insert sort");
        printf("\nbubble - for bubble sort\n");
        return 0;
    }

    int size_tab = 0;
    do {
        printf("Podaj ilosc slow:");
        scanf("%d", &size_tab);
    } while (size_tab <= 1);
    char *array[size_tab];
    char string[32];
    for ( int i = 0; i < size_tab; i++) {
        printf("Podaj %d slowo: ", nextString + 1);
        scanf("%s", string);
        tab[i] = (char *)malloc(sizeof(char) * (strlen(string) + 1));
        strcpy(tab[i], string);
    }
    printf("Tablica:\n");
    for (int i = 0; i < n; i++) {
        printf("%s  ", tab[i]);
    }
    printf("\n");
    if (args(argc, argv) == 1)
        bubble(tab, n);
    if (args(argc, argv) == 2)
        insert(tab, n);
    for (int i = 0; i < n; i++) {
        printf("%s  ", tab[i]);
    }
    printf("\n");
    for (int i = 0; i < size_tab; i++) 
        free (tab[i]);
    free(tab);
    tab = NULL;
    return 0;
}
