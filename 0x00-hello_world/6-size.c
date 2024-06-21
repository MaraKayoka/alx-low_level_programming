#include <stdio.h>
/**
 * main - a program that writes various type of data
 * Return: 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longintType;
	long long int longlongintType;

	printf("Size of int: %zu byte\n", sizeof(intType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	printf("Size of double: %zu byte\n", sizeof(floatType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of long int: %zu byte\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
	return (0);
	}
