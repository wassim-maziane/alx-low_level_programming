#include "main.h"
/**
 * jack_bauer - pritns every minuted of day
 *
 * Return : void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 5; k++)
				for (l = 0; l <= 9; l++)
				{
					if ((i == 2) && (j > 3))
						continue;
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
}
