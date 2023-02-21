#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int nbr;
	int nbr2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			nbr = i * j;
			if (nbr < 10)
			{
				_putchar('0' + nbr);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				nbr2 = nbr % 10;
				nbr = nbr / 10;
				_putchar('0' + nbr);
				_putchar('0' + nbr2);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
