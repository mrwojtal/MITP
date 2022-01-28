#include "matrix.h"
#include <math.h>
                                    //calculating determinant of matrix with Laplace extension
int m_determinant(MATRIX *Matrix1) {

    int wyznacznik = 0;
    int wiersz, kolumna;
    MATRIX Laplace;

    if (Matrix1->m != Matrix1->n)
        return 0;

    else if (Matrix1->m == 1)
        return (*Matrix1->w);

    else if (Matrix1->m == 2)
        return (*(Matrix1->w) * (*(Matrix1->w + 3)) - (*(Matrix1->w + 1)) * (*(Matrix1->w + 2)));

    else {
        Laplace = m_create(Matrix1->m - 1, Matrix1->m - 1);
        for (int i = 0; i < Matrix1->m; i++) {
            kolumna = 0;
            for (int j = 1; j < Matrix1->n; j++) {
                wiersz = 0;
                for (int k = 0; k < Matrix1->m; k++) {
                    if (k == i)
                        continue;
                    m_put(&Laplace, kolumna, wiersz, m_get(Matrix1, j, k));
                    wiersz++;  }
                kolumna++;
            }
            wyznacznik += (*(Matrix1->w + i)) * pow(-1, i) * m_determinant(Matrix1);
        }
    }
    m_remove(&Laplace);
    return wyznacznik;
}
