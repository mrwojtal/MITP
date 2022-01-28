#include <stdio.h>
                                         // printing triangle in terminal
int main() {
   int h;
   printf("Podaj wysokosc trojkata:");
   scanf("%d", &h);
   for(int i=0; i<h; i++) {
      printf("\n\t");
      for(int j=0; j<h-i; j++) {
         printf(" ");
      }
      for(int k=0; k<=2*i; k++) {
         printf("%%");
      }
   }
   printf("\n\n");
   return 0;
}
