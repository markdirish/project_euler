public class Problem4
{
   public static void main(String[] args)
   {
      int largestPalindrome = 0;
      int factor1 = 0;
      int factor2 = 0;
      
      for (int i = 100; i < 999; i++) {
         for (int j = 100; j < 999; j++) {
            int product = i * j;
            
            int forward = product;
            int reverse = 0;
            
            while (forward != 0) {
               int digit = forward % 10;
               reverse = reverse * 10;
               reverse = reverse + digit;
               forward = forward / 10;
            }
            
            if (product == reverse) {
               if (product > largestPalindrome) {
                  largestPalindrome = product;
                  factor1 = i;
                  factor2 = j;
               }
            }
         }
      }
      
      System.out.println("Largest palindrome made from the product of two " 
                            + "three-digit integers is " + largestPalindrome
                            + ", the product of " + factor1 + " and " 
                            + factor2 + ".");
   }
}