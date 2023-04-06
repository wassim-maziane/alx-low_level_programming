#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

if (!(separator))
separator = NULL;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (!str)
printf("(nil)");
else
printf("%s", str);
if (i != (n-1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}

