#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = (char *) malloc(sizeof(len + 1));

	if (dup == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}
