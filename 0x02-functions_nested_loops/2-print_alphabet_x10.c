#include "main.h"

/**
 *print_alphabet - prints the alphabet, in lowercase
 *
 *Return: Nothing
 */
void print_alphabet_x10(void)
{
int count = 0;
char alpha_lower;

while (count < 10)
{
alpha_lower = 'a';

while (alpha_lower <= 'z')
{
_putchar(alpha_lower);
alpha_lower++;
}

count++;
_putchar('\n');
}

}
