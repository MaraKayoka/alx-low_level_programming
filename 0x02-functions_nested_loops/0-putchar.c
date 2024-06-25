#include <stdio.h>
/**
 * main - a program that prints a word
 * Return: 0(Success)
 */
int main(void)
{
	File *filepointer;

	char *filename = "0-putchar.c";

	filepointer = fopen(filename, "w")

	if (filepointer != NULL)
	{
		fprintf(filepointer, "_putchar.c");
	} else
	{
	printf("Error printing\n");
	}
	return (0);
}
