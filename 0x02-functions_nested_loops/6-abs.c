#include "main.h"

/**
 * _abs - prints the absolute value
 * @b: character that checks for abolute int
 * Return: Absolute value of number or 0
 */

int _abs(int b)
{

	if (b < 0)
	{
		int abs_vals;

		abs_vals = b * -1;
		return (abs_vals);
	}
	return (b);
}
