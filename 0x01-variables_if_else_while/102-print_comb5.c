#include <stdio.h>
/**
 * main - a program that gives a combinaison of two two numbers
 * Return: 0(Success)
 */

int main(void)
{
	int j, k;

	for (j = '00'; j <= '99'; j++)
	{
		for (k = j + 1; k <= '99'; k++)
		{ if (j != k)
			{
				putchar(j);
				putchar(k);
				if (j != '98' || k != '99')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	} putchar('\n');
	return (0);
}
