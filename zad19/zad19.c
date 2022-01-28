#include <string.h>
#include <stdio.h>
#include "sortstring.h"
                                                                                                    // sorting static string array
int main(int argc, char* argv[]) {
    char* tab[12]={"To", "by", "nic", "nie","dalo", "i", "tak", "byłem", "trzeci", "w", "kulach"};
    if(args(argc, argv)==0){
        printf("usage: ./zad18 -nvalue");
        printf("\nPossible values:");
        printf("\ninsert - for insert sort");
        printf("\nbubble - for bubble sort\n");
        return 0;
    }
    if(args(argc, argv)==1)
        bubble(tab, 12);
    if(args(argc, argv)==2)
        insert(tab, 12);
    for(int i=0; i<12; i++) {
        printf("%s", tab[i]);
    }
    printf("\n");
    return 0;
}
