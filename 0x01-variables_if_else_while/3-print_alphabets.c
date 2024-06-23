#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that prints the alphabet in lc then upc
 * Return: Always 0(Success)
 */
/* Always remember your wife betty*/

int main(void)
{
	char ch = 'A';

	ch = tolower(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

	{
		putchar(tolower(ch));
	} putchar(ch);
	putchar('\n');
	return (0);
}
