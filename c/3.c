#include <stdio.h>

int  main() {

   unsigned long n = 600851475143;
   int i = 3;

   while (!(n % 2)) {
      n = n / i;
   }

   
   while (i * i < n) {
      while (!(n % i)) {
         n = n / i;
      }
      i = i + 2;
   }

   printf("%d\n", n);
   return 0;
}
