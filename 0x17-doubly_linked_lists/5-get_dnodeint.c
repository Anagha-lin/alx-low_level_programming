#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets nth node of a list at index
 * @head: point to head of list.
 * @index: location of node starting from 0.
 *
 * If the node does not exist, return NULL.
 *
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	/* check if the first node (head) is NULL */
	if (!head)
		return (NULL);

	/* while the first node (head) is not NULL */
	while (head != NULL)
	{
		/* initialize search here */
		if (i == index)
			break;
		i++;
		/* make the first node (head) point to next if index is not found */
		head = head->next;
	}
	/* return the node */
	return (head);
}
