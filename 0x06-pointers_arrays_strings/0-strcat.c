#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	b = -1;

	for (a = 0; dest[a] != '\0')
		a++;

	do {
		b++;
		dest[a] = src[b];
		a++;
	} while (src[b] != '\0');

	return (dest);
	
}
