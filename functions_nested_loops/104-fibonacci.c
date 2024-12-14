#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main ()
{
    unsigned long int first_high = 0, first_low = 1;
    unsigned long int second_high = 0, second_low = 2;
    unsigned long int next_high, next_low;
    int count = 98, i;

    printf("%lu, %lu", first_low, second_low);

    for (i = 3; i <= count; i++)
    {
        next_low = first_low + second_low;
        next_high = first_high + second_high;

            if(next_low < first_low)
                next_high++;
        
        printf(", %lu", next_low);

        first_low = second_low;
        first_high = second_high;
        second_low = next_low;
        second_high = next_high;
    }
    printf("\n");
    
    return(0);
}