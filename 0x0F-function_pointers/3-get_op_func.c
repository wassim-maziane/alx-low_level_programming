#include "calc.h"
#include <stddef.h>
#include <string.h>
/**
 * get_op_func - selects correct function
 * @s: operator
 * 
 * Return: pointer to correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};
    	int i = 0;
	
	while (strcmp(s, ops[i].op) && i < 6)
		i++;
	if (i == 6)
		return (NULL);
	return ops[i].f;	
}
