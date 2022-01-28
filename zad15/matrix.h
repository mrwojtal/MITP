#ifndef _MATRIX_H
#define _MATRIX_H

struct MATRIX_S {
    int m;
    int n;
    int *w;
};

typedef struct MATRIX_S MATRIX;

MATRIX m_create(int, int);

int m_remove(MATRIX*);

int m_get(MATRIX*, int, int);

void m_put(MATRIX*, int, int, int);

int m_printf(MATRIX*);

int m_scanf(MATRIX*);

int m_scanf_(MATRIX*, int m, int n);

int m_determinant(MATRIX *);

MATRIX m_quotient(MATRIX *Matrix1, MATRIX *Matrix2);

#endif //_MATRIX_H
