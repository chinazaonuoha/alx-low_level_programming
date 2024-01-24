#include "main.h"

/**
 *wildcmp - compares two strings
 *@s1: first char pointer
 *@s2: second char pointer
 *
 *Return: Integer
 */

int wildcmp(char *s1, char *s2)
{
while (*s1 || *s2)
{
if (*s2 == '*')
{

while (*s2 == '*')
{
s2++;
}


if (!*s2)
{
return (1);
}

while (*s1 && *s1 != *s2)
{
s1++;
}
}
else if (*s1 == *s2)
{
s1++;
s2++;
}
else
{
return (0);
}
}
return (1);
}
