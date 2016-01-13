#include <stdio.h>

int  main() {

   int sum, step, num = 1;
   sum = num;

   int i, j;

   for (i = 3; i <= 1001; i +=2) {
      step = i - 1;
      for (j = 0; j < 4; j++) {
         num += step;
         sum += num;
      }
   }

   printf("%d\n", sum);
   return 0;
}
