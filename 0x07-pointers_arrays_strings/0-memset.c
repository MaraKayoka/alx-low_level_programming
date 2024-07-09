#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @b: constant byte
 * @s: Pointer to the memory area to be filled.
 * @n: number of byte to be filled
 * Return: Pointer to the filled memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	} return (s);
}
