#include "main.h"

/**
 *_strlen_recursion - prints the length of an string
 *@s: character ponter
 *Return: Nothing
 */
int _strlen_recursion(char *s)
{
int counter;
if (*s == '\0')
{
return (0);
}
counter = 1;
counter += _strlen_recursion(s + 1);
return (counter);
}
