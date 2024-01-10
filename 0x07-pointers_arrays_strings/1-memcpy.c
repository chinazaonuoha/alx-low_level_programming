/**
 *_memcpy - copies a memory address
 *@dest: destination to copy to
 *@src: source to copy from
 *@n: number of bytes to copy
 *
 *Return: a memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n--)
{
*dest++ = *src++;
}
return (dest - n);
}
