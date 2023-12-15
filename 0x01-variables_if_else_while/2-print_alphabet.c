#include<stdio.h>

/**
 *main - prints the alphabet in lowercase, followed by a new line.
 *
 *Return: 0(success)
 *
 */

int main(void)
{
/*int counter;*/
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
/*counter++;*/
alphabet++;
}
putchar('\n');

return (0);
}
