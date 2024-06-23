#include <stdio.h>
/**
 * main - a program that prints fferent combinations of two digit
 * Return: 0(Success)
 */

int main(void)
{
	int n, k;

	for (n = '0'; n <= '9'; n++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (n != k)
			{
				putchar(n + '0');
				putchar(k + '0');
				if (n != 9 || k != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	} putchar('\n');
	return (0);
}
