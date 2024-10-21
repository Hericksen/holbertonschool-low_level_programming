#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
  int n, last_n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  last_n = n%10;
  
  printf("Last digit of %d is %d ", n, last_n);
  
  if (last_n > 5)
      {
	printf("and is greater than 5");
      }
  if (last_n == 0)
    {
      printf("and is 0");
    }
  if (last_n < 6 && last_n != 0)
    {
      printf("and is less than 6 and not 0");
    }
  return (0);
}
