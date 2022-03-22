#include "main.h"

/** 
 * _strlen - returns the length of a string
 * @s: character for which value, the length of string will be returned
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
