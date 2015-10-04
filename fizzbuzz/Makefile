RUSTC ?= rustc
SOURCES = $(find . -name '*.rs')
all: rust cpp c99
rust:
	rustc -O fizzbuzz.rs -o fizzbuzz.out
cpp:
	g++ -O2 fizzbuzz.cpp -o fizzbuzz.a
c99:
	gcc -O2 fizzbuzz.c -o a.out
clean:
	@rm -f fizzbuzz *.out *.a
