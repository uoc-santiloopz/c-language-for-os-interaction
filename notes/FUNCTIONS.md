# Function

In C, arguments are copied by value to functions, which means that we cannot change the arguments to affect their value outside of the function. To do that, we must use pointers, which are taught later on.

```c
#include <stdio.h>


/* function declaration */
int foo(int bar);

int main() {
    /* calling foo from main */
    printf("The value of foo is %d\n", foo(1));
}

int foo(int bar) {
    return bar + 1;
}
```

### Static variables
By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase their scope up to file containing them. As a result, these variables can be accessed anywhere inside a file.


```c
#include <stdio.h>


int runner()
{
	// count will be increased in the second call
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    return 0;
}
```

By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to the file containing it.

```c
static void fun(void) {
   printf("I am a static function.");
}
```


### Static vs Global?

While static variables have scope over the file containing them making them accessible only inside a given file, global variables can be accessed outside the file too.


### Function arguments by reference
Function arguments are passed by value, which means they are copied in and out of functions. But what if we copied pointers to values instead of the values themselves? This will enable us to give functions control over variables and structures of the parent functions, and not just a copy of them.  
```c
void addone(int * n) {
    (*n)++;
}

int n;
printf("Before: %d\n", n);
addone(&n);
printf("After: %d\n", n);
```

### How to access struct properties from a pointer to the struct
There are two equivalent syntaxes
```
void move(point * p) {
    (*p).x++;
    (*p).y++;
}
```
or
```
void move(point * p) {
    p->x++;
    p->y++;
}
```