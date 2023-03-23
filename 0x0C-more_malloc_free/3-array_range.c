#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (max > min)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (!ar)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		ar[i] = min + i;
	return (ar);
}
