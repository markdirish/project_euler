public class Problem5
{
   public static void main(String[] args)
   {
      boolean numFound = false;
      int smallestMultiple = 20;
      
      while(!numFound) {
         numFound = true;
         for (int i = 10; i <= 20; i++) {
            if (smallestMultiple % i != 0) {
               numFound = false;
               smallestMultiple += 20;
            }
         }
      }
      
      System.out.println(smallestMultiple);
   }
}