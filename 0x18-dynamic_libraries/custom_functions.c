#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int numbers[6];
	for (int i = 0; i < 6; i++)
	{
		numbers[i] = atoi(argv[i + 1]);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	return 0;
}
