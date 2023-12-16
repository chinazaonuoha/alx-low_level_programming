#include <stdio.h>
/**
*main - Entry point
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

printf("\n");
return (0);
}
