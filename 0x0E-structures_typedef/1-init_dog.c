#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes dog
 * @d: dog variable
 * @name: dog name
 * @age: age of dog
 * @owner: owner of the dog
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
