#include "main.h"
/**
* set_bt - sets the value of a bit to 1 at a given index
* @n: pointer to integer
* @index: index to be changed
* 
* Return: 1 if it worked, -1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
  if (index >= (sizeof(unsigned long int) * 8))
    return (-1);
  *n |= (1 << index);
  return (1);
}

