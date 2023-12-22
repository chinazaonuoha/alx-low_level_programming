#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - print every minutes of the day
 *
 *Return: Nothing
 */

void jack_bauer(void)
{
int min = 0;
int hour = 0;

while (min < 10)
{
printf("00:0%d\n", hour);
min++;
hour += 1;
}

min = 0;
while (min < 10)
{
printf("23:5%d\n", min);
min++;
}
}
