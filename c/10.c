#include <stdio.h>
#include <stdlib.h>

#define LIMIT 2000000

int  main() {

   unsigned long i, j;
   long* primes;
   unsigned long sum = 0;

   primes = malloc(sizeof(long)*LIMIT);

   for (i=2; i< LIMIT; i++) {
      primes[i] = 1;
   }

   for (i = 2; i < 1415; i++) {
      if (primes[i]) {
         for (j = i; i * j < LIMIT; j++) {
            primes[i * j] = 0;
         }
      }
   }

   for (i = 2; i < LIMIT; i++) {
      if (primes[i]) {
         sum += i;
      }
   }

   printf("%lu\n", sum);
   return 0;
}
