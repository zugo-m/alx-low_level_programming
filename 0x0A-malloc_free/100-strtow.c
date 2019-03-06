#include <stdlib.h>
#include "holberton.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
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
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (c && (str[i] == ' ' || str[i] == '\0'))
		{
			end = i;
			matrix[k] = (char *) malloc(sizeof(char) * (c + 1));
			if (matrix[k] == NULL)
				return (NULL);
			while (start < end)
				*matrix[k]++ = str[start++];
			*matrix[k] = '\0';
			k++;
			c = 0;
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
