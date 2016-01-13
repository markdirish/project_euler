import java.nio.charset.Charset;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.IOException;

public class Problem22
{
   static String readFile(String path, Charset encoding)
      throws IOException
   {
      byte[] encoded = Files.readAllBytes(Paths.get(path));
      return new String(encoded, encoding);
   }
   public static void main(String[] args)
   {
     //names[] = 
      String names = readFile("p022_names", Charset.defaultCharset());
      System.out.println(names);
   }
}
