#include <stdio.h>

int  main() {
    int n;
    int count;
    int i, j;
   for (i = 1; count <= 500 ; i++) {
      n = (i * (i + 1)) / 2;
      count = 0;
      for (j = 1; j <= n; j++) {
         if ( n % j == 0 ) {
             count++;
         }
      }
   }
   printf("%d\n", n);
   return 0;
}
