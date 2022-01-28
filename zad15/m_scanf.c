#include <stdio.h>
#include "matrix.h"
                                              // putting numbers to the matrix
int m_scanf(MATRIX * Matrix1) {
   int wartosc;
   for (int i = 0; i < Matrix1->m; i++) {
      for (int j = 0; j < Matrix1->n; j++) {
         printf("Podaj wartosc pola :");
         scanf("%d", &wartosc);
         m_put(Matrix1, i, j, wartosc);
      }
   }
   return 1;
}
