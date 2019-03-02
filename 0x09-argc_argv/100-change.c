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
	int num, i, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (argv[1][0] == '-')
	{
		puts("0");
		return (0);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{

		if ((argv[1][i] < '0' || argv[1][i] > '9') && argv[1][0] != '-')
		{
			puts("Error");
			return (1);
		}
	}

	for (j = 0; j < 5 && num > 0; j++)
	{
		if (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
