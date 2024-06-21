#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that uses if function
 * Return: Always 0 (Success)
 */
/* Betty is here to check my code so I'll do my best not to disappoint her*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

