#include <stdio.h>

/**
 *main - Gets the name of the program
 *@argc: arugment count
 *@argv: argument value
 *
 *Return: Integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
if ((argc > 0))
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (1);
}
