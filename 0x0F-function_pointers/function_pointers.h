 #ifndef FUNCTION_POINTERS_H
README.md #define FUNCTION_POINTERS_H


README.md #include <stddef.h>
README.md #include <stdlib.h>


README.md void print_name(char *name, void (*f)(char *));
README.md int _putchar(char c);
README.md void array_iterator(int *array, size_t size, void (*action)(int));
README.md int int_index(int *array, int size, int (*cmp)(int));


README.md #endif

