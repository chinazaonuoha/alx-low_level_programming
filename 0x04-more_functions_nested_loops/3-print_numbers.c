#include "main.h"

/**
 *print_numbers - checks for a digit (0 through 9).
 *
 *Return: Nothing
 */
void print_numbers(void)
{
char num = '0';
while (num <= '9')
{
_putchar(num);
num = num + 1;
}
_putchar('\n');
}
