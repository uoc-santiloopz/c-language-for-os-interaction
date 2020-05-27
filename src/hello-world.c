#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main()
{
	char c[19];

	sprintf(c, "Hello World!\n");
	write(1, c, strlen(c));
}
