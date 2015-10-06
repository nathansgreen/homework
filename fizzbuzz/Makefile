RUSTC ?= rustc
SOURCES = $(find . -name '*.rs')
all: rust cpp c99 dmd java csharp
rust:
	rustc -O fizzbuzz.rs -o fizzbuzz.out
	chmod u+x fizzbuzz.out
cpp:
	g++ -O2 fizzbuzz.cpp -o fizzbuzz.a
	chmod u+x fizzbuzz.a
c99:
	gcc -O2 fizzbuzz.c -o a.out
	chmod u+x a.out
dmd:
	dmd -O fizzbuzz.d -offizzbuzz.bin
	chmod u+x fizzbuzz.bin
java:
	javac -source 8 -target 8 Fizzbuzz.java
	jar -cfe fizzbuzz.0.jar Fizzbuzz Fizzbuzz.class
	echo '#!/usr/bin/env java -jar' > fizzbuzz.jar # hack
	cat fizzbuzz.0.jar >> fizzbuzz.jar
	rm fizzbuzz.0.jar
	chmod u+x fizzbuzz.jar
csharp:
	dmcs -optimize -main:Fizzbuzz -target:exe -out:fizzbuzz.exe Fizzbuzz.cs
	# mkbundle --static --deps fizzbuzz.exe -o fizzbuzz.cs.a
clean:
	@rm -f fizzbuzz *.out *.a *.o *.bin *.exe *.class *.jar
