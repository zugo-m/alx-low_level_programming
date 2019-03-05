#include <stdlib.h>
#include "holberton.h"

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix;
	int i, j = 0, k = 0, len = 0, len1 = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			len++;
			len1++;
		} else
			len1++;
	}

	matrix = (char **) malloc(sizeof(char *) * (len + 1));

	if (matrix == NULL)
		return (NULL);
		
	*matrix = (char *) malloc(sizeof(char) * (len + 1));

	if (*matrix == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			matrix[k][j] = '\0';
			k++;
			j = 0;
		} else
		{
			matrix[k][j] = str[i];
			j++;
		}
	}

	return (matrix);
}
