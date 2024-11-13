#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;
	copy_dog = (dog_t *)malloc(sizeof(dog_t));

	if (copy_dog == NULL)
		return (NULL);

	copy_dog->name = (char *)malloc(strlen(name) + 1);

	if (copy_dog->name == NULL)
	{
		free(copy_dog);
		return (NULL);
	}

	copy_dog->owner = (char *)malloc(strlen(owner) + 1);

	if (copy_dog->owner == NULL)
	{
		free(copy_dog->name);
		free(copy_dog);
		return (NULL);
	}

	strcpy(copy_dog->name, name);
	strcpy(copy_dog->owner, owner);

	copy_dog->age = age;

	return (copy_dog);
}
