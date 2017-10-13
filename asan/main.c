#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("This is a test.\n");
  int *buf = (int*)malloc(sizeof(int)*4);
  int i;
  for (i = 0; i < 5; i++) buf[i] = i;  // 1. invalid access
  printf("%d\n", buf[1]);
  // 2. not freed
  return 0;
}
