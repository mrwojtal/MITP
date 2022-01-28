#include "matrix.h"
                                                                        //multiplication of two matrices
MATRIX m_quotient(MATRIX *Matrix1, MATRIX *Matrix2) {
    MATRIX Matrixab;
    if (Matrix1->m != Matrix2->n)
        return *Matrix1;
    Matrixab = m_create(Matrix1->m, Matrix2->n);
    for (int i = 0; i < Matrix1->n; i++) {
        for (int j = 0; j < Matrix2->m; j++) {
            int iloczyn = 0;
            for (int k = 0; k < Matrix1->m; k++) {
                iloczyn += m_get(Matrix1, k, i) * m_get(Matrix2, j, k);
            }
            m_put(&Matrixab, j, i, iloczyn);
        }
    }
    return Matrixab;
}
