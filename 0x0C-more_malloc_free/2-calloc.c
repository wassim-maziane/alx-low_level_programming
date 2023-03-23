#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members of array
 * @size: size of each member
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	char *fill;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ar = malloc(size * nmemb);
	if (!ar)
		return (NULL);
	fill = ar;
	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';
	return (ar);
}
