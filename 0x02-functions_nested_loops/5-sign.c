#include "main.h"

/**
 *print_sign - print the sign of a number
 *@n: integer param
 *
 *Return: 1(true) or 0(false)
 */
int print_sign(int n)
{

if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}

}
