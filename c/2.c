#include <stdio.h>

int  main() {

   int sum = 0;
   int fib1 = 1, fib2 = 2, fib3;

   while ( fib2 < 4000000) {
      sum += fib2;
      fib3 = fib1 + fib2;
      fib1 = fib2 + fib3;
      fib2 = fib3 + fib1;
      
   }  

   printf("%d\n", sum);
   return 0;
}
