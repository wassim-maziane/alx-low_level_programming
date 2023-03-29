#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function to be used
 *
 * Return : void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!(action) || !(array))
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

