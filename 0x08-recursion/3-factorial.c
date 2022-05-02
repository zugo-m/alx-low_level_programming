#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number to calculate factorial of
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return factorial(n * (n - 1));
}
