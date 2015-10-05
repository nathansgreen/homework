s = new StringBuilder(10);
for (i in 1..100) {
  if (i % 3 == 0) s << 'Fizz'
  if (i % 5 == 0) s << 'Buzz'
  if (s.length() == 0) s << i
  println s
  s.delete(0, s.length())
}
