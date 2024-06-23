#include <stdio.h>
/**
 * main - a program that print the combianaison of three numbers
 * Return: 0(Success)
 */

int main(void)
{
	int n, j, k;

	for (n = '0'; n <= '9'; n++)
	{
		for (j = n + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				if ((n != j) != k)
				{
					putchar(n);
					putchar(j);
					putchar(k);
					if (n != '7' || j != '8' || k != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
