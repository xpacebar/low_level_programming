#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		lomgi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	-putchar('\n');
}
