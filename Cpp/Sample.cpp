#include <stdio.h>
#include "Sample.h"

Sample::Sample() {
  printf("Sample\n");
}

Sample::~Sample() {
  printf("~Sample\n");
}
   
void Sample::test() {
  printf("test\n");
}
