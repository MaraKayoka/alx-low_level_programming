#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints the last digit number
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char str1[] = "Last digit of";
	char str2[] = "and is greater than 5";
	char str3[] = "is";
	char str4[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%s %d %s and is 0\n", str1, n, str3);
	} else if (n > 0)
	{
		printf("%s %d %s  %s\n", str1, n, str3, str2);
	} else
	{
		printf("%s %d %s %s\n", str1, n, str3, str4);
	}
	return (0);
}
