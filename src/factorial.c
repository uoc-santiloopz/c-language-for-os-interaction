#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  long factorial = 1;
  int n = atoi(argv[1]);

  for(int i=1; i<=n; i++) {
  	factorial *= i;
  }

  printf("10! is %lo.\n", factorial);
}
