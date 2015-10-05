public class Fizzbuzz {
  public static void main(String... args) {
    StringBuilder s = new StringBuilder(10);
    //for (int j = 0; j < 100000; j++)
    for (int i = 1; i < 101; i++) {
      if (i % 3 == 0)
        s.append("fizz");
      if (i % 5 == 0)
        s.append("buzz");
      if (s.length() == 0)
        s.append(i);
      System.out.println(s);
      s.delete(0, s.length());
    }
  }
}
