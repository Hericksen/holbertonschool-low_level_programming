#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main ()
{
    int first = 1, second = 2, next = 0;
    int sum = 0;

    while (second <= 4000000)
    {
        if(second % 2 == 0)
        {
            sum += second;
        }

        next = first + second;
        first = second;
        second = next;
    }
    printf("%d\n", sum);

    return (0);
}