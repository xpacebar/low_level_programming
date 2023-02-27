#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input string
 * return: 0
 */

void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (0 = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
