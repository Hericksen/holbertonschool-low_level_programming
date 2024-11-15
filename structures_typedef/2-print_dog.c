#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the dog struct
 * * @d: pointer to dog struct
 * Return: void
*/

void print_dog(struct dog *d)
{
	/*if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner : %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}*/

	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: ");

	printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
