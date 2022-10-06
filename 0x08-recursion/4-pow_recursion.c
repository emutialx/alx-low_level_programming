#include "main.h"

/**
 * _pow_recursion - power function x raised to y
 * @x: Base
 * @y: power
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
