// all the lines that start with a hash are treated by the preprocessor (cpp)
// to include header files such as this ones, macros extension or conditional rendering
#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	char c[19];

	sprintf(c, "Hello World!\n");
	write(1, c, strlen(c));

	return 0;
}
