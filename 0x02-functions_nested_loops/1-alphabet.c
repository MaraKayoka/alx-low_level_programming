#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: 0(Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
