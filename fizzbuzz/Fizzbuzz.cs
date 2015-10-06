using System.IO;
using System.Text;

public class Fizzbuzz {
  public static void Main(string[] args) {
    StringBuilder s = new StringBuilder(10);
    for (int j = 0; j <100000; j++)
    for (int i = 1; i < 101; i++) {
      if (i % 3 == 0)
        s.Append("fizz");
      if (i % 5 == 0)
        s.Append("buzz");
      if (s.Length == 0)
        s.Append(i);
      System.Console.WriteLine(s);
      s.Clear();
    }
  }
}
