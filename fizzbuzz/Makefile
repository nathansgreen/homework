RUSTC ?= rustc
SOURCES = $(find . -name '*.rs')
all: rust cpp
rust:
	rustc -O fizzbuzz.rs -o fizzbuzz.out
cpp:
	g++ -O2 fizzbuzz.cpp -o fizzbuzz.a
clean:
	@rm -f fizzbuzz *.out *.a
