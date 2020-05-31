# Concepts

* C preprocessor (cpp)

### Structures
C structures are special, large variables which contain several named variables inside. Structures are the basic foundation for objects and classes in C. Structures are used for:

* Serialization of data
* Passing multiple arguments in and out of functions through a single argument
* Data structures such as linked lists, binary trees, and more  

Structures can also hold pointers - which allows them to hold strings, or pointers to other structures as well - which is their real power. For example, we can define a vehicle structure in the following manner
```
typedef struct {
    char * brand;
    int model;
} vehicle;

```

### Typedefs
Typedefs allow us to define types with a different name - which can come in handy when dealing with structs and pointers.