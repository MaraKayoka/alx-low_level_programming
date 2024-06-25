#ifndef "MAIN_H"
#define "MAIN.H"

#include <stdio.h>
/**
 * main - a program that prints a word
 * Return: 0(Success)
 */
int main(void)
{
	FILE *filepointer;

	char *filename = "0-putchar.c";

	filepointer = fopen(filename, "w");

	if (filepointer != NULL)
	{
		fprintf(filepointer, "_putchar.c");
		fclose(filepointer);
	} else
	{
	printf("Error printing\n");
	}
	return (0);
}
