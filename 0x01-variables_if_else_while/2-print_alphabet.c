#include <stdio.h>
#include <ctype.h>
/**
 * main- a program that write the aplhabet in lowercase
 * Return: Always 0(Success)
 */
/* Betty checking code for more fun and trouble*/

int main(void)
{
	char ch = 'A';

	ch = tolower(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

	{
		putchar(tolower(ch));
	} putchar('\n');
	return (0);
}
