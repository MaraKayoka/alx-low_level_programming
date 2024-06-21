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

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(floatType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	return (0);
	}