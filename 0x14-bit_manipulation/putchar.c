#include <unitstd.h>
#include "main.h"

/**
 * _putchar - Entry point
 * @c: character to write
 * Return: 0. (always success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
