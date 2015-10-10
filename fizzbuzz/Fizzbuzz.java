import static java.nio.charset.StandardCharsets.US_ASCII;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.Spliterator;
import java.util.function.Supplier;
import java.util.stream.IntStream;

public class Fizzbuzz {
  private static final byte[] fizz = "fizz".getBytes(US_ASCII);
  private static final byte[] buzz = "buzz".getBytes(US_ASCII);
  private static final int[] range = new int[100];
  static {
    for (int i = 0; i < range.length; i++)
      range[i] = i + 1;
  }

  public static void main(String... args) {
    final byte[] s = new byte[10];
    final int pos = 0;
    final ByteArrayOutputStream out = new ByteArrayOutputStream(10);
    //for (int j = 0; j < 100000; j++)
    IntStream.of(range)
      .forEach(i -> {
        try {
          int a = i % 3, b = i % 5;
          if (a == 0) { out.write(fizz); }
          if (b == 0) { out.write(buzz); }
          if (a != 0 && b != 0) {
            out.write(Integer.toString(i).getBytes(US_ASCII));
          }
          out.write('\n');
          out.writeTo(System.out);
          out.reset();
        } catch (IOException e) {}
      });
  }

  static void fizzbuzz() {
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
