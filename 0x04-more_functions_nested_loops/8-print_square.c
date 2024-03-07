#include <stdio.h>
#include "main.h"

/**
 *print_square - prints a square
 *@size: size of the square
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row = 1;
while (size >= row)
{
int col = 1;
while (size >= col)
{
_putchar('#');
col++;
}
_putchar('\n');
row++;
}

}

}
