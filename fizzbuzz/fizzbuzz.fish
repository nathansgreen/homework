#!/usr/bin/env fish
# Copyright 2015 Nathan Green

# this is extremely slow due to the `math` calls which
# shell out to `bc`
for j in (seq 1 100);
for i in (seq 1 100);
  set s ''
  if math "$i % 3" >/dev/null == 0;
    set s 'fizz'
  end
  if math "$i % 5" >/dev/null == 0;
    set s $s'buzz'
  end
  if test -z $s;
    set s $i
  end
  echo $s
end
end
