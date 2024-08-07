#include "main.h"
/**
 * factorial - a function that returns the factorial of a number
 * @n: integer number to be returned
 * Return: 0(always)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
