#include <stdio.h>
                                                      // In this program I request 2 numbers from user, and it is comparing them, and tells wether they are equal,
int main() {                                          //   or which one is bigger than the other                                                                                                                                                                                                                                        
    float x, y;
    printf("Podaj 1 liczbe:");
    scanf("%f", &x);
    printf("Podaj 2 liczbe:");
    scanf("%f", &y);
    if(x>y){
        printf("Liczba %.2f jest wieksza\n", x);
    }
    if(x<y){
        printf("Liczba %.2f jest wieksza\n", y);
    }
    if(x==y){
        printf("Liczby %.2f i %.2f sa rowne\n", x, y);
    }
    return 0;
}
