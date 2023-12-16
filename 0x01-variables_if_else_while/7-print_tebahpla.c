#include <stdio.h>
/**
*main -  prints the lowercase alphabet in reverse
*
*Return: Always 0 (success)
*/
int main(void)
{
char reverse = 'z';
while (reverse >= 'a')
{
putchar(reverse);
reverse--;
}
putchar('\n');
return (0);
}
