#include <stddef.h>
/**
 *_strchr - search occurance of a character
 *@s: pointer to the string
 *@c: the character to search
 *
 *Return: the character or NULL
 */
char *_strchr(char *s, char c)
{
while (*s && *s != c)
{
s++;
}

return ((*s == c || c == '\0') ? s : NULL);
}
