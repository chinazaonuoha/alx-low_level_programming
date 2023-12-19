#include <stdio.h>

/**
*main -  prints possible combinations of single-digit numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
int num_ten;
for (num_ten = 48; num_ten <= 57; num_ten++)
{
putchar(num_ten);
if(num_ten != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
