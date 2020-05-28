#include <stdio.h>


int main(void) {
 	// pointers to a character array to define simple strings
	char * name = "John Smith";

	/**
	* This method creates a string which we can only use for reading.
	* If we wish to define a string which can be manipulated, we will 
	* need to define it as a local character array
	*/
	char name[] = "John Smith";
	/**
	* This notation is different because it allocates an array variable 
	* so we can manipulate it. The empty brackets notation [] tells the
	*  compiler to calculate the size of the array automatically. This is 
	* in fact the same as allocating it explicitly, adding one to the 
	* length of the string:
	*/
	char name[] = "John Smith";
	/* is the same as */
	char name[11] = "John Smith";


	// string formatting
	char * name = "John Smith";
	int age = 27;

	/* prints out 'John Smith is 27 years old.' */
	printf("%s is %d years old.\n", name, age);

	// function to return string length
	strlen(stringName);

	// string concatenation
	char dest[20]="Hello";
	char src[20]="World";
	strncat(dest,src,3);
	printf("%s\n",dest);
	strncat(dest,src,20);
	printf("%s\n",dest);



}