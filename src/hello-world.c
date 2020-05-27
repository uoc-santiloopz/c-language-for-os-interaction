#include <stdio.h>


int main(void)
{
	char c[20];

	sprintf(c, "Hello World!\n")
	write(1, c, 20);
}
