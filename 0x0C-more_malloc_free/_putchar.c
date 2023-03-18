#include <stdio.h>
#include "main.h"

/**
 * _putchar - entry level
 * @c: value to enter
 * Return: 1 on success
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
