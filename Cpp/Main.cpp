#include <stdio.h>
#include "Sample.h"

void hoge() {
  printf("hoge\n");
}

int main(int argc, char **argv) {
  int n = 0;
  printf("Hello, World\n");
  hoge();
  Sample sample;
  sample.test();
  n = 2;
  return 0; 
}
