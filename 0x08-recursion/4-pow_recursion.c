#include "main.h"

/**
 * _pow_recursion - function that returns the value of a number raised to the power of another
 * @x: base value
 * @y: power to which based value is raised
 * Return: value of x raused to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
