#include <stdio.h>

/**
 * main - prints sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int y, z = 0;

	while (y < 1024)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			z += y;
		}
		y++;
	}
	printf("%d\n", z);
	return (0);
}
