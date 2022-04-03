#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: 
 * @size:
 *
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sumr, suml;

	sumr = 0;
	suml = 0;

	for (i = 0; i < size; i++)
	{
		sumr = sumr + a[(size * i) + 1];
		suml = suml + a[(size * (i +1)) - (i +1)];
	}
	
	printf("%d,%d\n", sumr, suml);
}
				
