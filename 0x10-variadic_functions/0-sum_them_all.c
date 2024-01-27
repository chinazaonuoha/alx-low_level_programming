#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum all the value
 *@n: constant count
 *
 *Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list arg_list;

if (n == 0)
{
return (0);
}
va_start(arg_list, n);
i = 0;
while (i < n)
{
sum += va_arg(arg_list, int);
i++;
}

va_end(arg_list);
return (sum);
}
