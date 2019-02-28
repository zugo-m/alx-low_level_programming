#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, result;

	result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		if (num >= 25)
		{
			num -= 25;
			result++;
		} else if (num >= 10)
		{
			num -= 10;
			result++;
		} else if (num >= 5)
		{
			num -= 5;
			result++;
		} else if (num >= 2)
		{
			num -= 2;
			result++;
		} else if (num == 1)
		{
			num -= 1;
			result++;
		}
	}

	printf("%d\n", result);

	return (0);
}
