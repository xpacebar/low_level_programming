#include <stdio.h>
/**
 * main - print alphabets with execptions
 * Return: 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
			continue;
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
