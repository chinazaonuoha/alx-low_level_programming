#include <stddef.h>
/** print_name - decleartion*/
void print_name(char *name, void (*f)(char *));

/** array_iterator - decleartion*/
void array_iterator(int *array, size_t size, void (*action)(int));

/** int_index - decleartion*/
int int_index(int *array, int size, int (*cmp)(int));
