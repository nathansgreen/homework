//Copyright 2015 Nathan Green
import std.array, std.stdio, std.conv;

void main() {
  char[] s;
  foreach (i; 1..101) {
    s.length = 0;
    if (i % 3 == 0) {
      s ~= "fizz";
    }
    if (i % 5 == 0) {
      s ~= "buzz";
    }
    if (!s.length)
      s ~= to!string(i);
    writeln(s);
  }
}
