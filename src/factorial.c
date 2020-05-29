#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  long factorial = 1;
  // TODO: validate that argument is correct
  int n = atoi(argv[1]);

  for(int i=1; i<=n; i++) {
  	factorial *= i;
  }

  printf("%d! is %lo.\n", n, factorial);
}
