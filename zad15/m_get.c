#include "matrix.h"
                                                    // getting value of matrix cell
int m_get(MATRIX * Matrix1, int m, int n) {
   int wartosc;
   wartosc = *(Matrix1->w + m + (Matrix1->m * n));
   return wartosc;
}
