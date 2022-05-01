#include "main.h"

/**
 * _puts_recursion - funciton that prints a string followed by a new line
 * @s: string to prirnt
 *
 * Return: String followed by a new line.
 */
void _puts_recursion(char *s)
{
	//base case
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}	
