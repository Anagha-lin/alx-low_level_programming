#include "lists.h"

/**
 * print_dlistint - function that prints all the elemts of a doubly linked list
 * @h: poiner to the head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	/* while we have a pointer to the list */
	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
