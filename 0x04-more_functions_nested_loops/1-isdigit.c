#include "main.h"

/**
 *_isdigit - checks for a digit (0 through 9).
 *@c: int
 *
 *Return: 1 or 0
 */
int _isdigit(int c)
{
int isFalse = 0;
return ((c >= '0' && c <= '9') ? isFalse = 1 : isFalse);
}
