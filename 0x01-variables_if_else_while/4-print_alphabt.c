#include <stdio.h>
/**
*main - Print all the letters except q and e
*
*Return: Always 0 (success)
*/
int main(void)
{
int alpha_lower = 96;

while (alpha_lower < 122)
{
alpha_lower++;
if ((alpha_lower == 'q') || (alpha_lower == 'e'))
continue;
putchar(alpha_lower);
}

putchar('\n');
return (0);
}
