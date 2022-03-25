#include "main.h"

/** _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: max byte size of src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i, j;

	i = 0;
	j = i;

	while (src[j] != '\0' && j < n)
	{	
		dest[i] = src[j];
		i++;
	}

	while (j < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
