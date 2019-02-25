#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, n;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	n = size * size;

	for (i = 0; i <= n; i += (size + 1))
	{
		sum += a[i];
	}

	printf("%d, ", sum);

	for (j = n - size; j >= 0; j -= (size - 1))
	{
		sum1 += a[j];
	}

	printf("%d\n", sum1);
}
