public class Problem6
{
   public static int sumSquareDifference(int i)
   {
      return squareOfSums(i) - sumOfSquares(i);
   }
   
   public static int sumOfSquares(int i)
   {
      int sum = 0;
      for (int j = 1; j <= i; j++) {
         sum += (j * j);
      }
      return sum;
   }
   
   public static int squareOfSums(int i)
   {
      int sum = 0;
      for (int j = 1; j <= i; j++) {
         sum = sum + j;
      }
      return (sum * sum);
   }
   
   public static void main(String[] args)
   {
      System.out.println(sumSquareDifference(100));
   }
}