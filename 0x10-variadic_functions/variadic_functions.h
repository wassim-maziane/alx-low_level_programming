#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * printers - struct of functions that print
 * @symbol: identifier
 * @print: pointer to function compatible with identifier
 */
typedef struct printers {
  char symbol;
  void (*print)(va_list args);
} printers;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
