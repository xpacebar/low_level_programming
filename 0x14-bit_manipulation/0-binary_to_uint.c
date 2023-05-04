#include <main.h>

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: string containing the binary number
 * Retuen: the converted string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i;

	if (!b)
		retun (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
