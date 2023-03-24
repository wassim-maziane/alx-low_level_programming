#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type dog
 * @d: variable
 * @name: name to be assigned
 * @age: age to be assigned
 * @owner: owner to be assigned
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
