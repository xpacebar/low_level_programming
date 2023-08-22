#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: new memory space copied to
 * @src: location of original memomy copied
 * @n: number of bytes copied
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
