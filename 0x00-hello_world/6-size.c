#include <stdio.h>
/**
 * main - a program that writes various type of data
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	double c;
	char d;
	long int f;
	long long int e;

	printf("Size of int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of float: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of double: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of long int: %lu byte(s)\n", (unsigned long) sizeof(f));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long) sizeof(e));
	return (0);
	}
