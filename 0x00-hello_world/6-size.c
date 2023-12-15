#include<stdio.h>
/**
 *main - Print size of data type in difference machine
 *
 *Return: 0 (success)
 */

int main(void)
{
    printf("Size of a char: 1 byte(s)");
    printf("Size of an int: 4 byte(s)");
    printf("Size of a long int: 4 byte(s)");
    printf("Size of a long long int: 8 byte(s)");
    printf("Size of a float: %f byte(s)\n", sizeof(float));
return(0);
}
