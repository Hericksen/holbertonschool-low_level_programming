#include <stdio.h>
#include <stdlib.h>

/* main - entry point
 * @argc: all arguments
 * @argv: array of arguments
 * Return: Error if more than 2 args, 0 if 2 args.
*/

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("%d\n", (num1 * num2));

    return (0);
}
