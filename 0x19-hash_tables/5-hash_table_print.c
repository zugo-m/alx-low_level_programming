#include "hash_tables.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 */
int print_list(hash_node_t *h)
{
	int s = 0;

	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		if (h->next)
			printf(", ");
		h = h->next;
		s++;
	}

	return (s);
}
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0, size = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (flag == 1)
			printf(", ");
		size = print_list(ht->array[i]);
		if (size > 0)
			flag = 1;
		else
			flag = 0;
	}

	printf("}\n");
}
