#include "main.h"

/**
 * _strlen - the length of a string
 * @s: string length ro return
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
