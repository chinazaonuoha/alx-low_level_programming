#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument value
 *
 *Return: Integer
 */
int main(int argc, char *argv[])
{
int cents;
int i;
int coins[] = {25, 10, 5, 2, 1};
int sum_coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}


sum_coins = 0;

for (i = 0; i < 5; ++i)
{
sum_coins += cents / coins[i];
cents %= coins[i];
}

printf("%d\n", sum_coins);

return (0);
}
