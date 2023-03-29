#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array 
 * @size: size of array
 * @cmp: pointer to function to be used to compare
 *
 * Return: index of first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
