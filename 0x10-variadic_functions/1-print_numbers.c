#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - print a list of numbers
 *@separator: delimiter between numbers
 *@n: constant counter
 *
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg_list;
unsigned int i;
va_start(arg_list, n);
if (*separator == ',')
{
printf("%d", va_arg(arg_list, int));

for (i = 1; i < n; i++)
{
printf("%s%d", separator, va_arg(arg_list, int));
}
}

if (separator == NULL)
{
return;
}
va_end(arg_list);
printf("\n");
}
