#include<stdio.h>

/**
 *main - prints the letter in lower and upper case, followed by a new line.
 *
 *Return: 0(success)
 *
 */

int main(void)
{
/*int counter;*/
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
/*counter++;*/
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
/*counter++;*/
uppercase++;
}

putchar('\n');

return (0);
}
