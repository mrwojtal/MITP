#include <stdio.h>
                                                          // Calculation between temperature in Celsius degrees and Fahrenheits
 int main() {
    float celc, fahr;
    printf("Podaj temperature w stopniach Celsjusza:");
    scanf("%f", &celc);
    fahr = ((9.0/5.0)*celc)+32;
    printf("Temperatura w Fahrenheitach:%.2f\n", fahr);
    return 0;
}
