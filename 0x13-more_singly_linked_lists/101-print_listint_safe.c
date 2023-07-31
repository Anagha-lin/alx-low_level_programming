#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t linkedlist = 0;
	const listint_t *end_node = head;

	if (!head)
		exit(98);

	while (end_node)
	{
		printf("[%p] %i\n", (void *)end_node, end_node->n);
		end_node = end_node->next;
		linkedlist++;
	}
	return (linkedlist);
}
