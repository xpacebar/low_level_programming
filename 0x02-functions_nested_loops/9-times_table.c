#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: empty output
 */

void times_table(void)
{

	int b, c, d, e, f;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			d = b * c;
			if (d > 9)
			{
				e = d % 10;
				f = (d - e) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(f + '0');
				_putchar(e + '0');
			}
			else
			{
				if (c != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(d + '0');
			}
		}
		_putchar('\n');
	}
}
