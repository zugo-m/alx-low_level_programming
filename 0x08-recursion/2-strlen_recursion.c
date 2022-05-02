#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string to print its length
 * Return: the length of a given string
 * */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return count;
	}
	return(1 + _strlen_recursion(s + 1));
}
