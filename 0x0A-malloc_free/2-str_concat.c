#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0;

	s3 = malloc(sizeof(char *));

	if (s3 == NULL)
		return (NULL);

	if (*s1 == '\0')
	{
		while ((s3[i++] = s2[j++]) != '\0')
			;
	}

	i = 0;
	j = 0;

	if (*s2 == '\0')
	{
		while ((s3[i++] = s1[j++]) != '\0')
			;
	}

	i = 0;
	j = 0;

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}

	while ((s3[i++] = s2[j++]) != '\0')
		;

	return (s3);
}
