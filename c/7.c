#include <stdio.h>

int  main() {

   unsigned long count = 1, prime = 3;
   int i;

   while ( count < 10001 ) {
      int found = 0;
      for (i = 2; i < prime; i++) {
          if ((prime % i) == 0) {
              prime += 2;
              found = 1;
              break;
          }
      }
      
      if (!found) {
         count++;
         printf("The %d prime is %d\n", count, prime);
         prime += 2;
      }
   }

   return 0;
}
