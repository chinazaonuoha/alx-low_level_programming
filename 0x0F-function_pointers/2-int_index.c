#include "function_pointers.h"

/**
 *int_index - print the index of array item
 *@array: array pointer
 *@size: the size of array
 *@cmp:pointer to function
 *
 *Return: Integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
for (i = 0; i < size; i++)
if (cmp(array[i]))
{
return (i);
}
return (-1);
}
