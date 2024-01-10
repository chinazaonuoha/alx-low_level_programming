/**
 *print_diagsums - cal the sum of a matrix
 *@a: an integer pointer
 *@size: an integer size
 *
 *Return: Nothing
 *
 */

void print_diagsums(int *a, int size)
{
int row = 0;
int col = 0;
int i;

for (i = 0; i < size; i++)
{
row += a[i * size + i];
col += a[i * size + (size - 1 - i)];
}
}
