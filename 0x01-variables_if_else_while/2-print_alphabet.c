#include <stdio.h>
/**
 * main - The project prints alphabets with a new line
 * Return: 0
 */

int main(void)
{
	char alp;
	for (alp = 'a'; alp >= 'z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
