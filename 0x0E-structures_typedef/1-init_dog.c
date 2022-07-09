#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct
 * @d: the variable to be initialized
 * @name: the name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
