#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, k, d, n, len, f;
	d = 0;
	n = 0;
	len = 0;
	k = 0;
	f = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			++d;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}

	for (j = 0; j < len; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
			n = 10 * n + (s[j] - '0');
		else
			continue;

		if (s[j + 1] < '0' || s[j + 1] > '9')
			break;
	}

	while (k < len && f == 0)
	{
		if (s[k] <= '0' && s[k] >= '9')
			f = 0;
		else
			f = 1;
	}

	if (f == 0)
		return (0);

	if (d % 2 != 0)
		n = -n;

	return (n);
}
