#include <stdio.h>
                                                  // checking if number is an integer, and if it is than checking if it is even or odd
int main() {
    float liczba;
    printf("Podaj liczbe:");
    scanf("%f", &liczba);
    if (liczba == (int) liczba) {
        printf("Liczba jest calkowita\n");
        if ((int) liczba % 2) {
            printf("Liczba jest nieparzysta\n");
        } else {
            printf("Liczba jest parzysta\n");
        }
    } else {
        printf("Liczba nie jest calkowita\n");
    }
    return 0;
}
