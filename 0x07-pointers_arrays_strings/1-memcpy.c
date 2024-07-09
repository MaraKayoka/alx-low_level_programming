#include "main.h"
/**
 * *_memcpy - a program that copies the memory address
 * @n: the byte to be copied
 * @dest: memory area
 * @src: memory area
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
