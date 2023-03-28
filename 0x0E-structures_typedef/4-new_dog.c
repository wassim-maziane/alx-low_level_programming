#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcopy - copies a string
 * @src: source string
 * @dst: destination string
 *
 * Return: void
 */
void _strcopy(char *src, char *dst)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog (success), NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0;
	dog_t *zbi;

	while (name[a])
		a++;
	while (owner[b])
		b++;
	zbi = malloc(sizeof(dog_t));
	if (!(zbi))
		return (NULL);
	zbi->name = malloc(a + 1);
	if (!(zbi->name))
	{
		free(zbi);
		return (NULL);
	}
	zbi->owner = malloc(b + 1);
	if (!(zbi->owner))
	{
		free(zbi->name);
		free(zbi);
		return (NULL);
	}
	zbi->age = age;
	_strcopy(name, zbi->name);
	_strcopy(owner, zbi->owner);
	return (zbi);
}
