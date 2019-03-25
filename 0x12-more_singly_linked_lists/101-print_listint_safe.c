#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	uint i, j;
	const listint_t *arr[20];

	if (!head)
		exit(98);

	for (i = 0; head; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (head != arr[j] && head != arr[i])
			{
				arr[i] = head;
				break;
			}
			else
				exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		num++;
		head = head->next;
	}

	return (num);
}
