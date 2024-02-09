#include "main.h"
#include <stdio.h>
/**
 *more_numbers - print ten times 0 to 14
 *
 *Return: Nothing
 */

void more_numbers(void)
{
int j = 1;
char num;
while (j <= 10)
{
int i = 0;
while (i <= 14)
{
num = i + '0';
if (i < 9)
{

_putchar(num);

}
if (i > 9)
{
num = '0' + (i / 10);
_putchar(num);
num = '0' + (i % 10);
_putchar(num);
}
i++;
}
_putchar('\n');
j++;
}

}
