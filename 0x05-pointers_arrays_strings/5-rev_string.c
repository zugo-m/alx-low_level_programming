#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 */
void rev_string(char *s)
{
	int a, b, y;

        char str;

	b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
/* Code prints the string length of strign with array size b */
	y = b - 1;

	for (a = 0; a < b / 2; a++)
	{/*Code block impletments the swap method to insert */
		str = s[a];
		s[a] = s[y];
		s[y--] = str;
	}
}

