#include "main.h"
#include <stddef.h>
/**
 * *_strchr - function that locates a character in a string
 * @c: character in the string
 * @s: string
 * Return: a pointer to the first occurence of c in s, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	} return (NULL);
}
