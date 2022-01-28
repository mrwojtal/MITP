#include <stdlib.h>
#include "matrix.h"
                                                      //creating matrix
MATRIX m_create(int m, int n) {
   MATRIX Matrix1;
   Matrix1.w = (int *) malloc(m * n * sizeof(int));
   if (Matrix1.w == NULL) {
      Matrix1.m = 0;
      Matrix1.n = 0;
   }
   else {
      Matrix1.m = m;
      Matrix1.n = n;
   }
   return Matrix1;
}
