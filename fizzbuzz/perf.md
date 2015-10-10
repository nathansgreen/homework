<!-- Copyright 2015 Nathan Green -->

Tests are done by running the fizzbuzz loop 100,000 times.
Timing is done as follows:
```sh
    time ./{binary} >/dev/null
```

Compiler  | real  | user  | sys
:-------- | ----: | ----: | ----:
gcc       |  1.94 |  1.92 |  0.00
g++       |  4.56 |  4.53 |  0.01
perl 5.18 |  5.83 |  5.67 |  0.05
rust      |  6.39 |  3.18 |  3.20
dmd       |  7.05 |  7.02 |  0.02
ruby 2.2  |  8.41 |  7.82 |  0.23
java 8 (8u60) <sup>[3](#note3)</sup> | 9.09 | 5.78 user | 3.48
python27  | 12.37 | 12.31 |  0.04
C# (mono 4.2) | 13.49 | 9.61 | 3.74
java 5 (8u60) | 18.75 | 12.01 |  6.95
bash 3.2 <sup>[2](#note2)</sup> | 624.00 | 550.50 | 51.00
fish 2.2 <sup>[1](#note1)</sup> | 93,050.00 | 41,150.00 | 55,730.00


<a name="note1"/>[1] Fish shell runs so slow that I was forced to extrapolate from 100 runs. Being 3-4 orders of magnitude slower than optimal is definitely painful.

<a name="note2"/>[2] Bash was tested with 10,000 runs and extrapolated upward.

<a name="note3"/>[3] The Java 8 version uses streams and lambdas, and is still slower than it could be due to use of `Integer.toString()`.
