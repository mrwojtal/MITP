#include "days.h"
                                                                //function liczenie calculates number of days for given dates
int liczenie(struct DAY DX) {
    int dni = DX.rok * 365 + DX.rok / 4 + DX.rok / 400;
    if (DX.rok == 1582 && DX.miesiac >= 10 && DX.dzien > 14)
        dni -= 10;
    for (int i = 0; i != DX.miesiac; i++) {
        switch (i) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                dni += 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dni += 30;
                break;
            case 2:
                dni += 28;
                break;
        }
    }
    dni += DX.dzien;
    return dni;
}

int days(struct DAY d1, struct DAY d2) {
    int wynik = liczenie(d1) - liczenie(d2);

    if (wynik < 0)
        wynik = -wynik;
    return wynik;
}
