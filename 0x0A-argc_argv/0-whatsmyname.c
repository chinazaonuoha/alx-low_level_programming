#include <stdio.h>

/**
 *main - Gets the name of the program
 *@argc: arugment count
 *@argv: argument value
 *
 *Return: Integer
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
