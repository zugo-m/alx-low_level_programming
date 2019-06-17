#include "sort.h"

/**
 * len_list - returns the length of a linked list
 * @h: pointer to the list
 *
 * Return: length of list
 */
int len_list(listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

/**
 * insertion_sort_list - sorts a linked list with the Insert Sort algorithm
 * @list: double pointer to the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list, *one, *two, *three, *four;

	if (!list || !(*list))
		return;
	if (len_list(*list) < 2)
		return;
	while (1)
	{
		while (curr->next && curr->n < curr->next->n)
			curr = curr->next;
		if (!curr->next)
			return;
		one = curr->prev;
		two = curr;
		three = curr->next;
		four = curr->next->next;

		two->next = four;
		if (four)
			four->prev = two;
		three->next = two;
		three->prev = two->prev;
		if (one)
			one->next = three;
		else
			*list = three;
		two->prev = three;
		curr = *list;
		print_list(curr);
	}
}
