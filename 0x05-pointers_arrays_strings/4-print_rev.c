#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	int a, b, length;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
/* Code prints string length with [a] as size of array */
	length = a;
/* lenght takes the value of size of array (a) */
	for (b = length - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}

