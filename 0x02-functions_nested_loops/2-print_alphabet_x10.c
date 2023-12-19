#include "main.h"

/**
 *print_alphabet - prints the alphabet, in lowercase
 *
 *Return: Nothing
 */
void print_alphabet_x10(void)
{
char alpha_lower = 'a';
int count = 0;

while (alpha_lower <= 'z')
{
_putchar(alpha_lower);
alpha_lower++;
}

_putchar('\n');
}
