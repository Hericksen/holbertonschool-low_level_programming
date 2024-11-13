#include <stdlib.h>

/**
 * struct dog - structure of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: form of a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
