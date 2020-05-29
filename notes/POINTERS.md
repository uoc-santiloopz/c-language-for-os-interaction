# Pointers

Pointers are also variables and play a very important role in C programming language. They are used for several reasons, such as:

* Strings
* Dynamic memory allocation
* Sending function arguments by reference
* Building complicated data structures
* Pointing to functions
* Building special data structures (i.e. Tree, Tries, etc...)


### What is a pointer?
A pointer is essentially a simple integer variable which holds a memory address that points to a value, instead of holding the actual value itself.

The computer's memory is a sequential store of data, and a pointer points to a specific part of the memory. Our program can use pointers in such a way that the pointers point to a large amount of memory - depending on how much we decide to read from that point on.

### Strings as pointers

We've already discussed strings, but now we can dive in a bit deeper and understand what strings in C really are (which are called C-Strings to differentiate them from other strings when mixed with C++)

The following line:
```
char * name = "John";
```

* It allocates a local (*stack*) variable called name, which is a pointer to a single character.
* It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course).
* It initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory).


### Dereferencing

Dereferencing is the act of referring to where the pointer points, instead of the memory address. We are already using dereferencing in arrays - but we just didn't know it yet. The brackets operator - [0] for example, accesses the first item of the array. And since arrays are actually pointers, accessing the first item in the array is the same as dereferencing a pointer. Dereferencing a pointer is done using the asterisk operator \*.

```
/* define a local variable a */
int a = 1;

/* define a pointer variable, and point it to a using the & operator */
int * pointer_to_a = &a;

printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);
```