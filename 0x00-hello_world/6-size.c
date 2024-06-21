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

	printf("Size of int: %zu byte(s),\n", sizeof(intType));
	printf("Size of float: %zu byte(s),\n", sizeof(floatType));
	printf("Size of double: %zu byte(s),\n", sizeof(floatType));
	printf("Size of char: %zu byte(s),\n", sizeof(charType));
	printf("Size of long int: %zu byte(s),\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s),\n", sizeof(longlongintType));
	return (0);
	}
