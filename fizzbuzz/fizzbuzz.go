//Copyright 2015 Nathan Green
package main

import (
	"bytes"
	"fmt"
	"os"
)

func main() {
  var b = new(bytes.Buffer)
  //for j := 1; j < 100000; j++ {
  for i := 1;  i <= 100; i++ {
    if i % 3 == 0 { b.Write([]byte("fizz")) }
    if i % 5 == 0 { b.Write([]byte("buzz")) }
    if b.Len() == 0 { fmt.Fprintf(b, "%d", i) }
    b.WriteByte('\n')
    b.WriteTo(os.Stdout)
    b.Reset()
  }
  //}
}
