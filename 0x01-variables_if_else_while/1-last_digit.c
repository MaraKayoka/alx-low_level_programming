#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints the last digit of a number
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDigit;
	char myString[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	} else if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	} else
	{
		printf("Last digit of %d is %d %s\n", n, lastDigit, myString);
	}
	return (0);
}
