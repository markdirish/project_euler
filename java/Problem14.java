public class Problem14
{
   private static final int MAX = 1000000;
   public static void main(String[] args)
   {
      int startingNumber = 0;
      int maxChainLength = 0;
      
      for (int i = 2; i < MAX; i++) {
         long j = i;
         int chainLength = 1;
         while(j > 1) {
            chainLength++;
            if (j % 2 == 0) {
               j = (j / 2);
            }
            else {
               j = (3 * j) + 1;
            }
         }
         
         if (chainLength > maxChainLength) {
            startingNumber = i;
            maxChainLength = chainLength;
         }
      }
      
      System.out.println("Starting Number: " + startingNumber);
      System.out.println("Chain Length: " + maxChainLength);
   }
}