/**
 *_memset - fill memory with constant value
 *@s: character pointer
 *@b: a character
 *@n: unsigned integer
 *
 *Return: The pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
