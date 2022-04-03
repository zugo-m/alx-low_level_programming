#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to a variable  of char type
 */
void set_string(char **s, char *to)
{
	int i, j;

	for (i = 0; to[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; i++)
		{
			*s = to;
		}
	}
}
