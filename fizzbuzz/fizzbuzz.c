// Copyright 2015 Nathan Green
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char s[10];
    int spos = 0;
    for (int i = 1; i < 101; i++) {
      if (i % 3 == 0) {
        memcpy(s + spos, "fizz", 4);
        spos += 4;
      }
      if (i % 5 == 0) {
        memcpy(s + spos, "buzz", 4);
        spos += 4;
      }
      if (spos == 0) {
        sprintf(s, "%d\n", i);
      } else {
        s[spos++] = '\n';
        s[spos] = 0;
      }
      printf(s);
      spos = 0;
    }
    return 0;
}
