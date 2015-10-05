<!-- Copyright 2015 Nathan Green -->

Tests are run by looping over the fizzbuzz loop 100,000 times.
Timing is done as follows:
    time ./{binary} >/dev/null

Compiler | real | user | sys
-------- | ---: | ---: | ---:
gcc      |  1.94 |  1.92 | 0.00
g++      |  4.56 |  4.53 | 0.01
rust     |  6.39 |  3.18 | 3.20
dmd      |  7.05 |  7.02 | 0.02
python27 | 12.37 | 12.31 | 0.04
