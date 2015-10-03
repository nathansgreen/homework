RUSTC ?= rustc
SOURCES = $(find . -name '*.rs')
all: build
build:
	rustc -O fizzbuzz.rs -o fizzbuzz.out
	g++ -O2 fizzbuzz.cpp -o fizzbuzz.a
clean:
	@rm -f fizzbuzz *.out *.a
