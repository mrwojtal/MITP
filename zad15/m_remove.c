#include "matrix.h"
#include <stdlib.h>
                                  // deleting matrix
int m_remove(MATRIX * Matrix1) {
   if (Matrix1 == NULL)
      return 0;
   if (Matrix1->w == NULL)
      return 1;
   free(Matrix1->w);
   Matrix1->m = 0;
   Matrix1->n = 0;
   Matrix1->w = NULL;
   return 1;
}
