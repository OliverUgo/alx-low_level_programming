#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @dog *d: the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
