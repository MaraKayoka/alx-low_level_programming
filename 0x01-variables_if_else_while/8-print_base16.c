#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that print hexadecimal numbers
 * Return: 0(Success)
 */

int main(void)
{
	int n;
	char ch = 'A';

	ch = tolower(ch);

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (ch = 'A'; ch <= 'F'; ch++)
	{
		putchar(tolower(ch));
	} putchar('\n');

	return (0);
}
