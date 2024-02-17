#include <stdio.h>

int main(void)
{
int row, col;

for(row = 0; row <= 9; row++)
{

for(col = 0; col <= 9; col++)
{ 
  if ( row != 10)
    {
      printf("%d  ", row * col);
    }
}
 printf("\n");
}
return (0);
}
