#include "main.h"

/**
 * *_memcpy - copiees memory area
 * @dest: where size of memory area is copied to
 * @src: where size of memory area is copeid from
 * @n: size of memory area to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

