#include "main.h"

/**
 * swaps the value of integers
 * a and b are pointers of first and second integer type variable that will swap
 */

void swap_int(int *a, int *b)
{
	int y;
	y = *a;
	*a = *b;
	*b = y;
}
