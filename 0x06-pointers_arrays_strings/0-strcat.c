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

	for (a = 0; dest[a] != '\0'; a++); /*Increments the destination sting when not terminated*/
	
	do {
		b++; /*print source string forward considering the condition*/
		dest[a] = src[b];
		a++;
	}while (src[b] != '\0');

	return (dest);
}
