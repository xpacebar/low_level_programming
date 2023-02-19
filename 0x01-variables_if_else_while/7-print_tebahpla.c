#include <stdio.h>
/**
 * main - prints alphabets in descending order
 * Return: 0
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
