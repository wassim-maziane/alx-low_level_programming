#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: memory to be allocated
 *
 * Return: void pointer to assigned memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
