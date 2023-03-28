#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to dog to be printed
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (!d)
		return;
	if (!(name))
		name = "(nil)";
	if (!(owner))
		owner = "(nil)";
	if (age)
		printf("Name: %s\nAge: %.6f\nOwner : %s\n", name, age, owner);
	else
		printf("Name: %s\nAge: %s\nOwner : %s\n", name, "(nil)", owner);
}
