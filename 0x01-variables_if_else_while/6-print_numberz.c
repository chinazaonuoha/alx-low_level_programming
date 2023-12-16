#include <stdio.h>

/**
*main -  prints all single digit of base 10 starting from 0
*
*Return: Always 0 (success)
*/
int main(void)
{
int num_ten;
for (num_ten = 48; num_ten <= 57; num_ten++)
{
putchar(num_ten);
}
putchar('\n');
return (0);
}
