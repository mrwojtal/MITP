#define sto 100
#define pd 50
#define dd 20

#include <stdio.h>
                                                                              // program is printing all possibilities of sum with 20zl, 50zl and 100zl bills
int main() {
    int kwota;
    printf("Podaj kwote:");
    scanf("%d", &kwota);
    if (kwota % 10 == 0 && kwota >= 20 && kwota != 30) {
        for (int i = 0; i <= kwota / dd; i++) {
            for (int j = 0; j <= (kwota - i * dd) / pd; j++) {
                int k = (kwota - i * dd - j * pd) / sto;
                if (kwota == (k * sto + j * pd + i * dd))
                    printf("%d PLN = %d*100 %d*50 %d*20 \n", kwota, k, j, i);
            }
        }
    } else
        printf("Nie da sie rozlozyc takiej kwoty\n");
    return 0;
}
