#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	for (i = 0; i < 10; i++)

	{
		printf("%d ", i);

	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
