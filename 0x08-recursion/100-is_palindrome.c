#include <string.h>
#include "main.h"

/**
 *is_palindrome - Check a palindrome
 *@s: character pointer
 *
 *Return: Integer
 */
int is_palindrome(char *s)
{
int length = strlen(s);
int i;
for (i = 0; i < length / 2; i++)
{
if (s[i] != s[length - 1 - i])
{
return (0);
}
}

return (1);
}
