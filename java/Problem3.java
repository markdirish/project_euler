public class Problem3
{
   public static int getLPF(int i)
   {
      int largestPrime = i;
      for (int j = 2; j < Math.sqrt(largestPrime); j++)
      {
         if (largestPrime % j == 0) {
            largestPrime /= j;
            j = 1;
         }
      }
      return largestPrime;
   }
   
   public static void main(String[] args)
   {
      System.out.println(getLPF(393832));
   }
}