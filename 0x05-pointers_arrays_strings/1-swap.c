#include "main.h"

/**
 * swap_int - swaps the value of integers
 * @a: pointer to first value of variable of int type
 * @b: pointer to second value of variable of int type
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
