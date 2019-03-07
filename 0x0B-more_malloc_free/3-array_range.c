#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	size = max - min;

	ptr = malloc(max * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
