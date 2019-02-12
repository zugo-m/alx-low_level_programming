#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, next, j1, j2, k1, k2, next1, next2;

	j = 1;
	k = 2;

	for (i = 1; i < 92; ++i)
	{
		printf("%lu, ", j);
		next = j + k;
		j = k;
		k = next;
	}

	j1 = j / 10000000;
	j2 = j % 10000000;
	k1 = k / 10000000;
	k2 = k % 10000000;

	for (i = 92; i < 99; ++i)
	{
		printf("%lu", j1);
		printf("%lu, ", j2);
		next1 = j1 + k1;
		j1 = k1;
		k1 = next1;
		next2 = j2 + k2;
		j2 = k2;
		k2 = next2;
	}

	return (0);
}
