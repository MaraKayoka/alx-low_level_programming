#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that prints the alphabet except two letters
 * Return: Always 0(Success)
 */

int main(void)
{
	char ch = 'A';

	ch = tolower(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch != 'Q' && ch != 'E')
		putchar(tolower(ch));
	} putchar('\n')
	return (0);
}
