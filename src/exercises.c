#include <stdio.h>

int main() {
  int n = 11;

  /* your code goes here */
  int * pointer_to_n = &n;

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}