#include <stdio.h>
/**
 * main - a program that writes various type of data
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int d;
long long int f;
float e;

printf("Size of chart: %lu byte(s),\n", (unsigned long) sizeof(a));
printf("Size of int: %lu byte(s),\n", (unsigned long) sizeof(b));
printf("Size of long int: %lu byte(s),\n", (unsigned long) sizeof(d));
printf("Size of long long int: %lu byte(s),\n", (unsigned long) sizeof(f));
printf("Size of float: %lu byte(s),\n", (unsigned long) sizeof(e));
return (0);
	}
