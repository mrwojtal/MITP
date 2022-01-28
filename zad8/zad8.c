#include <stdio.h>
                                         // printing rectangle in terminal
int main() {
    int bok;
    printf("Podaj dlugosc boku:");
    scanf("%d", &bok);
    printf("\n\t");
    for(int i=bok; i>0; --i){
        printf("%%");
    }
    for(int i=bok-2; i>0; --i){
        printf("\n\t%%");
        for(int i=bok-2; i>0; --i){
            printf(" ");
        }
        printf("%%");
    }
    printf("\n\t");
    for(int i=bok; i>0; --i){
        printf("%%");
    }
    printf("\n\n");
    return 0;
}
