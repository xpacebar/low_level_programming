#include "main.h"

/**
 * get_bit - returns the value of a bit at the index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: index of the bit
 */

int get_bit(unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
