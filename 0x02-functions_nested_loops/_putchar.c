#include <unistd.h>
/*
 * main - The puchar function
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
