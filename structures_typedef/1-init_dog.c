#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise a dog file
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: structure of dog
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
