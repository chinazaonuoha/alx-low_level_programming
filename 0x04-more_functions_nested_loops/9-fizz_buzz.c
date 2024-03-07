#include <stdio.h>


/**
 *main - prints the numbers from 1 to 100
 *
 *Return: Integer
 */
int main(void)
{
int min = 1;
int max = 100;
while (min <= max)
{
if (min % 3 == 0)
{
printf("Fizz ");
}
else if (min % 5 == 0)
{
printf("Buzz ");
}
else if ((min % 3 == 0) && (min % 5 == 0))
{
printf("FizzBuzz ");
}
else
{
printf("%d ", min);
}
min++;
}
printf("\n");
return (0);
}
