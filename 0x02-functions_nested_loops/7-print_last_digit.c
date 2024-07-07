#include "main.h"
/**
 * print_last_digit -  Prints the last digit of a number
 * @p: The input integer.
 * Return: value of the last digit
 */
int print_last_digit(int p)
{
	int lastDigit;

	lastDigit = p % 10;

	_putchar("%d\n", lastDigit);

	return (lastDigit);
}
