#include "matrix.h"
                                                           //put single number to the matrix
void m_put(MATRIX * Matrix1, int m, int n, int wartosc) {
   int *komorka;
   komorka = Matrix1->w + m + (Matrix1->m * n);
   *komorka = wartosc;
}
