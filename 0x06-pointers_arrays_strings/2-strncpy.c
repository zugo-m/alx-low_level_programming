#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: max byte size of src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{	
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
