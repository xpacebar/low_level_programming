#include "main.h"

/**
 * _islower - check for type of c
 * @c: The character to be checked
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	return (0);
}
