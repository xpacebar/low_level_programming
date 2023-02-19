#include <stdio.h>
/**
 * main - to print all numbers of base 16 in lower case
 * Return: 0
 */

int main(void)
{
	int h;
	char low;

	for (h = '0'; h <= '9'; h++)
		putchar(h);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
