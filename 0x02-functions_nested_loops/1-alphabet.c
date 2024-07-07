#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the alphabet in lower case
 * Return: 0(Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
