#include "sort.h"

/**
 * radix_sort - sorts an array following the Radix sort algorithm
 * @array: array of ints to sort
 * @size: size of the array
 */
void radix_sort(int *array, size_t size)
{
	int max;
	size_t i, lsd;

	if (size < 2)
		return;

	max = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];

	for (lsd = 1; size / lsd > 0; lsd *= 10)
	{
		count_sort_LSD(array, size, lsd);
		print_array(array, size);
	}
}

/**
 * count_sort_LSD - count sort with LSD
 * @array: array to sort
 * @size: size of the array
 * @lsd: least significant digit
 */
void count_sort_LSD(int *array, size_t size, size_t lsd)
{
	int *count_arr, *out_arr, num, i, l, m;
	size_t k, n;

	count_arr = malloc(sizeof(size_t) * 10);
	out_arr = malloc(sizeof(int) * size);

	for (i = 0; i < 10; i++)
		count_arr[i] = 0;

	for (k = 0; k < size; k++)
	{
		num = array[k];
		count_arr[(num / lsd) % 10]++;
	}
	for (l = 1; l < 10; l++)
		count_arr[l] += count_arr[l - 1];

	for (m = size - 1; m >= 0; m--)
	{
		out_arr[count_arr[(array[m] / lsd) % 10] - 1] = array[m];
		count_arr[(array[m] / lsd) % 10]--;
	}

	for (n = 0; n < size; n++)
		array[n] = out_arr[n];

	free(count_arr);
	free(out_arr);
}
