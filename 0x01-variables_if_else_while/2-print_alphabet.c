#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that prints the alphabet in lower case
 * Return: Always 0(Success)
 */
/* Bettyu checking requires an extra line for the expression*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	return (0);

}