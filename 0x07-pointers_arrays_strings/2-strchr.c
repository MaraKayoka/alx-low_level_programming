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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	} return (NULL);
}
