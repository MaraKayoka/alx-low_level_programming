#include "main.h"
/**
 *  _pow_recursion - a function that returns the value of an int
 * @x: integer where the value should be taken
 * @y: integer where the value will be raised
 *  Return: factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
