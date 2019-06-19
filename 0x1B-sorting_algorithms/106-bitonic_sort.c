#include "sort.h"

/**
 * bitonic_sort - sorts an array following the Bitonic sort algorithm
 * @array: array of ints to sort
 * @size: size of the array
 */
void bitonic_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	bitonic_recursion(array, 0, size, 1, size);
}

/**
 * bitonic_recursion - recursive function for bitonic sort
 * @array: array to sort
 * @left: index of the left-most element
 * @s: size of the temporary array
 * @direction: ascending or descending
 */
void bitonic_recursion(int *array, int left, int s, int direction, size_t size)
{
	int tmp_s;

	if (s > 1)
	{
		tmp_s = s / 2;
		bitonic_recursion(array, left, tmp_s, 1, size);
		bitonic_recursion(array, left + tmp_s, tmp_s, 0, size);
		printf("Merging [%d/%d] ", tmp_s, (int)size);
		if (direction)
			printf("(UP):\n");
		else
			printf("(DOWN)\n");
		bitonic_merge(array, left, s, direction);
	}
}

/**
 * bitonic_merge - sorts and merges a sequence in ascending or descending order
 * @array: array to sort
 * @left: index of the left-most element
 * @s: size of the temporary array
 * @direction: ascending or descending
 */
void bitonic_merge(int *array, int left, int s, int direction)
{
	int tmp, i, tmp_s = s;

	if (s > 1)
	{
		tmp_s = s / 2;
		for (i = left; i < left + tmp_s; i++)
		{
			if (direction == (array[i] > array[i + tmp_s]))
			{
				tmp = array[i + tmp_s];
				array[i + tmp_s] = array[i];
				array[i] = tmp;
			}
		}
		print_array(array, s);
		bitonic_merge(array, left, tmp_s, direction);
		bitonic_merge(array, left + tmp_s, tmp_s, direction);
	}
}
