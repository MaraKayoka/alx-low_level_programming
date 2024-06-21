#include <stdlib.h>
#include <time.h>
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
		printf("is positive\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	} else
	{
		printf("is zero\n");
	}
	return (0);
}

