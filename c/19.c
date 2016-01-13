#include <stdio.h>

int  main() {
   
   int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int start = 1900;
   int end = 2000;
   int day = 1;
   int sum = 0;

   int i, j;
   for (i = start; i <= end; i++) {
      for (j = 0; j < 12; j++) {
         if (j == 1 && !(i % 4) && ((i % 100) || !(i % 400))) {
            day++;
         }

         day = ((day + days[j]) % 7);
         if (!day && i > start) {
            sum++;
         }
      }
   }

   printf("%d\n", sum);
   return 0;
}
