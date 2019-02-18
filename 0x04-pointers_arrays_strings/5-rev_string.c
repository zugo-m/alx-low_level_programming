#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
