#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints character format
 * @args: next argument for print_all function
 */
void print_char(va_list args)
{
  char arg;
  arg = va_arg(args, int);
  printf("%c", arg);
}
/**
 * print_int - prints integer format
 * @args: next argument for print_all function
 */
void print_int(va_list args)
{
  int arg;

  arg = va_arg(args, int);
  printf("%d", arg);
}
/**
 * print_string - prints character format
 * @args: next argument for print_all function
 */
void print_string(va_list args)
{
  char *arg;

  arg = va_arg(args, char *);
  if (!(arg))
  {
    printf("(nil)");
    return;
  }
  printf("%s", arg);
}
/**
 * print_float - prints character format
 * @args: next argument for print_all function
 */
void print_float(va_list args)
{
  float arg;

  arg = va_arg(args, double);
  printf("%f", arg);
}
/**
* print_all - prints all formats
* @format: format to be printed int
*
* Return: void
*/
void print_all(const char * const format, ...)
{
  int i = 0, j;
  va_list args;
  char *separator = "";
  printers functions[] = {
    {'i', print_int},
    {'c', print_char},
    {'s', print_string},
    {'f', print_float}
  };
  va_start(args, format);
  while (format && *(format + i))
  {
    j = 0;
    while (j < 4 && (*(format + i) != functions[j].symbol))
      j++;
    if (j < 4)
    {
      printf("%s", separator);
      functions[j].print(args);
      separator = ", ";
    }
    i++;
  }
  printf("\n");
  va_end(args);
}
