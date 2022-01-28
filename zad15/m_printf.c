#include <stdio.h>
#include "matrix.h"
                                                                  // printing matrix in terminal
int m_printf(MATRIX * Matrix1) {
   if (Matrix1->m <= 0 || Matrix1->n <= 0 || Matrix1->w == NULL) {
      return 0;
   }
   for (int i = 0; i < Matrix1->m; i++) {
      for (int j = 0; j < Matrix1->n; j++) {
         printf("    %6d", m_get(Matrix1, i, j));
      }
      printf("\n");
   }
   return 1;
}
