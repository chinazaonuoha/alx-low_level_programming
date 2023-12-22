#include "main.h"
#include<stdio.h>
/**
 *print_last_digit - print last digit number
 *@n: integer param
 *
 *Return: 1
 */
int print_last_digit(int n)
{
int last = n % 10;
if (last < 0)
{
last = -last;
}
_putchar('0' + last);
return (last);
}
