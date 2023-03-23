#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints values of struct dog
 * @d: pointer to struct dog
 * struct dog - structure pointed to
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("d->name: %s\n", d->name);
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("d->age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("d->owner: %s\n", d->owner);
}
