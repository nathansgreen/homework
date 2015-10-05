<!-- Copyright 2015 Nathan Green -->

Tests are done by running the fizzbuzz loop 100,000 times.
Timing is done as follows:
```sh
    time ./{binary} >/dev/null
```

Compiler  | real  | user  | sys
--------- | ----: | ----: | ----:
gcc       |  1.94 |  1.92 |  0.00
g++       |  4.56 |  4.53 |  0.01
perl 5.18 |  5.83 |  5.67 |  0.05
rust      |  6.39 |  3.18 |  3.20
dmd       |  7.05 |  7.02 |  0.02
python27  | 12.37 | 12.31 |  0.04
java8     | 18.75 | 12.01 |  6.95
