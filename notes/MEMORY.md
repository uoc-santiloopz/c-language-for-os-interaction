# Memory Management

### Dynamic allocation
Dynamic allocation of memory is a very important subject in C. It allows building complex data structures such as linked lists. Allocating memory dynamically helps us to store data without initially knowing the size of the data in the time we wrote the program.

To allocate a chunk of memory dynamically, we have to have a pointer ready to store the location of the newly allocated memory. We can access memory that was allocated to us using that same pointer, and we can use that pointer to free the memory again, once we have finished using it.



Let's assume we want to dynamically allocate a person structure.
```c
typedef struct {
    char * name;
    int age;
} person;
```

To allocate a new person in the myperson argument.
```c
person * myperson = (person *) malloc(sizeof(person));
```
This tells the compiler that we want to dynamically allocate just enough to hold a person struct in memory, and then return a pointer to the newly allocated data.  

To access the person's members, we can use the -> notation:
```c
myperson->name = "John";
myperson->age = 27;
```

After we are done using the dynamically allocated struct, we can release it using free:
```c
free(myperson);
```

### Dynamic Memory Allocation for Arrays
By now we know that we can traverse an array using pointers. Moreover, we also know that we can dynamically allocate (contiguous) memory using blocks pointers. These two aspects can be combined to dynamically allocate memory for an array. This is illustrated in the following code.

```c
// Allocate memory to store five characters
int n = 5;
char *pvowels = (char *) malloc(n * sizeof(char));
int i;

pvowels[0] = 'A';
pvowels[1] = 'E';
*(pvowels + 2) = 'I';
pvowels[3] = 'O';
*(pvowels + 4) = 'U';

for (i = 0; i < n; i++) {
    printf("%c ", pvowels[i]);
}

printf("\n");

free(pvowels);
```

So when is this useful? Remember that while declaring an array, the number of elements that it would contain must be known beforehand. Therefore, in some scenarios it might happen that the space allocated for an array is either too less than the desired space or too much more. However, by using dynamic memory allocation, one can allocate just as much memory as required by a program. Moreover, unused memory can be freed as soon as it is no longer required by invoking the free() function. On the down side, with dynamic memory allocation, one must responsibly call free() wherever relevant. Otherwise, memory leaks would occur.

### Dynamic memory allocation for a two-dimensional array
In this case we require a pointer to a pointer, as shown below.
```c
int nrows = 2;
int ncols = 5;
int i, j;

// Allocate memory for nrows pointers
char **pvowels = (char **) malloc(nrows * sizeof(char *));

// For each row, allocate memory for ncols elements
pvowels[0] = (char *) malloc(ncols * sizeof(char));
pvowels[1] = (char *) malloc(ncols * sizeof(char));

pvowels[0][0] = 'A';
pvowels[0][1] = 'E';
pvowels[0][2] = 'I';
pvowels[0][3] = 'O';
pvowels[0][4] = 'U';

pvowels[1][0] = 'a';
pvowels[1][1] = 'e';
pvowels[1][2] = 'i';
pvowels[1][3] = 'o';
pvowels[1][4] = 'u';

for (i = 0; i < nrows; i++) {
    for(j = 0; j < ncols; j++) {
        printf("%c ", pvowels[i][j]);
    }

    printf("\n");
}

// Free individual rows
free(pvowels[0]);
free(pvowels[1]);

// Free the top-level pointer
free(pvowels);
```