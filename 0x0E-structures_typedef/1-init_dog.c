#include <stdio.h>
#include "dog.h"

/**
 * init_dog - intialization
 * @name: dog's name
 * @age: dog's age
 * @owner: dog'sowner
 * @d: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
