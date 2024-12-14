#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * generate_password - Generate a random password
 * Return: void (prints the password to stdout)
 */
void generate_password(void)
{
    /* Define the character set for the password*/
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_+=<>?";
    int length = 50; /* Change this to match the expected length of the password*/
    int charset_size = sizeof(charset) - 1; /* Subtract 1 to ignore the null terminator*/
    int i;
    int random_index;
    /* Seed the random number generator*/
    srand((unsigned int)time(NULL));

    /* Random index in charset*/
     
    /* Generate a random password*/
    while(1)
    {
    for (i = 0; i < length; i++) 
    {  
        /*Print the character at the random index*/
        random_index = rand() % charset_size;  
        putchar(charset[random_index]);  
    }
    putchar('\n'); /*Print a newline at the end*/
    }
    
}

int main(void)
{
    /*Generate and print a random password*/
    generate_password();
    return 0;
}
