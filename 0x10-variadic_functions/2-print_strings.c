#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints a string
 *@separator: delimeter between the string
 *@n: constant counter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg_list;
unsigned int i;
va_start(arg_list, n);
if (*separator == ',')
{
printf("%s", va_arg(arg_list, char *));

for (i = 1; i < n; i++)
{
printf("%s%s", separator, va_arg(arg_list, char *));
}
}
else if (va_arg(arg_list, char *) == NULL)
{
printf("nil");
}

if (separator == NULL)
{
return;
}
va_end(arg_list);
printf("\n");
}
