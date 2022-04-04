#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment 
 * @accept: bytes to return/copy from
 *
 * Return : number of bytes in initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if(s[i] == accept[j])
			{
				f++;
			}
			if(s[i] != accept[j])
			{
				return (f);
			}
		}
	}

	return (0);
}	
