#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initializes them
 * @size: size of array
 * @c: character to intialiaze with
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	if (ar == 0 || size <= 0)
		return (0);
	for (i = 0; i < size; i++)
		ar[i] = c;
	ar[size] = '\0';
	return (ar);
}

