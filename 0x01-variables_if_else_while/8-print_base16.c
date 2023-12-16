#include <stdio.h>
/**
*main - prints all the numbers of base 16 in lowercase
*
*Return: Always 0 (success)
*/
int main(void)
{
char hex_num = 48;
char hex_num2 = 97;
while ((hex_num <= 57))
{
putchar(hex_num);
hex_num++;
}
while ((hex_num2 <= 102))
{
putchar(hex_num2);
hex_num2++;
}
putchar('\n');
return (0);
}
