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

  if (!(separator))
    separator = NULL;
  va_start(args, n);
  for (i = 0; i < n; i++)
  { if (i == n - 1)
      printf("%s", va_arg(args, char *));
     else
       printf("%s%s", va_arg(args, char *), separator);
  }
  printf("\n");
  va_end(args);
}

