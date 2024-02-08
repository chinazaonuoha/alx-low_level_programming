#include "main.h"

/**
 *print_most_numbers - print digit (0 through 9).
 *
 *Return: Nothing
 */
void print_most_numbers(void)
{
char num = '0';
while (num <= '9')
{
if (num == '2' || num == '4')
{
num = num + 1;
continue;
}
_putchar(num);
num = num + 1;
}
_putchar('\n');
}
