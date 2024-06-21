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
		print("is positive\n");
	} else if (n < 0)
	{
		print("is negative\n");
	} else
	{
		print("is zero\n");
	}
	return (0);
}

