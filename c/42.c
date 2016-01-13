#include <stdio.h>

int  main() {

   FILE *file = fopen("files/p042_words.txt", "r");
   if (!file) {
      printf("(Problem 42) ERROR: Could not open file");
      return -1;
   }

   int values[1786];

   int a = 65;
   int z = 90;
   char c = fgetc(file);
   int inword = 0;
   int value = 0;
   int i = 0;
   int max_val = 0;

   while (c != EOF) {
      if (c >= a && c <= z) {
         value = c - a + 1;
      }
      else if (inword = 1) { // reached the end of a word
         printf("%d\n", value);
         values[i] = value;
         if (value > max_val) {
            max_val = value;
         }
         value = 0;
         i++;
         inword = 0;
      }
      c = fgetc(file);
   }

   int n = 0; // how many tiangle words in the file

   // TODO: calculate this
   int triangle[100];
   int j;
   for (j = 1; j <= 100; j++) {
      triangle[j - 1] = (.5 * j) * (j + 1);
   }
   int k;
   int l;
   for (k = 0; k < 1786; k++) {
      value = values[k];
      for (l = 0; l < 100; l++) {
         if (value == triangle[l]) {
            n++;
         }
      }
   }

   printf("%d\n", n);
   return 0;
}
