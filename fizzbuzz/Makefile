RUSTC ?= rustc
SOURCES = $(find . -name '*.rs')
all: build
build:
	rustc -O fizzbuzz.rs -o fizzbuzz.out
clean:
	@rm -f fizzbuzz *.out
