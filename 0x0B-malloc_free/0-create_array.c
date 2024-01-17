#include "main.h"
#include <stdlib.h>
/**
 *create_array - create an array of char
 *@size: size of the array
 *@c: character
 *
 *Return: a pointer if success or Null if fails
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
if (size == 0)
{
return (NULL);
}
else
{
ptr = &c;
if (ptr == NULL)
{
return (NULL);
}
ptr = (char *)malloc(sizeof(char) * size);
return (ptr);
}
}
