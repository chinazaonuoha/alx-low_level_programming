#include "main.h"


/**
 *print_line -  Draws a straight line in the terminal
 *@n: number of line
 *
 */
void print_line(int n)
{
int i = 1;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n >= i)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
