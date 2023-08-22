#include "main.h"

/**
 * _isdigit - checks for digit from 0 -9
 * @c: char to be checked
 * Return: 1 0r 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
