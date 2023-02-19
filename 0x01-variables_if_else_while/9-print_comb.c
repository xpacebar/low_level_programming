#include <stdio.h>
/**
 * main - prints possible combination of single digits number
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
			if (a == 9)
				break;
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
