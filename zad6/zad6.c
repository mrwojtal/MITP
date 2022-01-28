#include <stdio.h>
                                                                                    // realizing simple adding under the dash
int main() {
    float cyfry;
    int a[4];
    int wynik = 0;
    for (int i = 0; i < 4; i++) {
        printf("Podaj %d liczbe:", i + 1);
        scanf("%5d", &a[i]);
        cyfry = a[i] / 10000; /* sprawdzenie czy liczba nie przekracza zakresu */
        if (cyfry >= 1) {
            printf("liczba ma wiecej niz 4 cyfry\n");
            return 0;
        } else
            wynik += a[i];
    }
    for (int i = 0; i < 4; i++) {
        printf("%5d\n", a[i]);
    }
    printf("-----\n");
    printf("%5d\n", wynik);
    return 0;
}
