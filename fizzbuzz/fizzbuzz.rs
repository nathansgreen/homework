use std::io::Write;

/// semi-efficient implementation of fizzbuzz
fn main() {
    let mut s = String::with_capacity(10);
    for i in 1..101 {
        if i % 3 == 0 { s.push_str("Fizz"); }
        if i % 5 == 0 { s.push_str("Buzz"); }
        if s.is_empty() { s.push_str(&i.to_string()); }
        s.push_str("\n");
        std::io::stdout().write(s.as_bytes());
        s.clear();
    }
}
