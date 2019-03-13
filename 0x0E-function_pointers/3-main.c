#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
