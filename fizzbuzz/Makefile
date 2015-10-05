RUSTC ?= rustc
SOURCES = $(find . -name '*.rs')
all: rust cpp c99 dmd java
rust:
	rustc -O fizzbuzz.rs -o fizzbuzz.out
cpp:
	g++ -O2 fizzbuzz.cpp -o fizzbuzz.a
c99:
	gcc -O2 fizzbuzz.c -o a.out
dmd:
	dmd -O fizzbuzz.d -offizzbuzz.exe
java:
	javac -source 1.5 -target 1.5 Fizzbuzz.java
	jar -cfe fizzbuzz.0.jar Fizzbuzz Fizzbuzz.class
	echo '#!/usr/bin/env java -jar' > fizzbuzz.jar
	cat fizzbuzz.0.jar >> fizzbuzz.jar
	rm fizzbuzz.0.jar
	chmod u+x fizzbuzz.jar
clean:
	@rm -f fizzbuzz *.out *.a *.o *.exe *.class *.jar
