#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that prints alphabet in reverse
 * Return: 0(success)
 */

int main(void)
{
	char ch;

	ch = tolower(ch);

	for (ch = 'Z'; ch <= 'A'; ch--)
	{
		putchar(tolower(ch));
	} putchar('\n');
	return (0);
}
