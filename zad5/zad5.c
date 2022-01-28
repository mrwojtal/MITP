#include <stdio.h>
                                                    // simple switch implementation with 4 basic math operations typed into terminal
int main() {
    float a, c, wynik;
    char b;
    printf("Podaj wyrazenie:");
    scanf("%f%c%f", &a, &b, &c);

    switch (b) {
        case '+' :
            printf("%.2f\n", a + c);
            break;
        case '-' :
            printf("%.2f\n", a - c);
            break;
        case '*' :
            printf("%.2f\n", a * c);
            break;
        case '/' :
            printf("%.2f\n", a / c);
            break;
        default :
            printf("Nie ma takiego dzialania\n");
    }
    return 0;
}
