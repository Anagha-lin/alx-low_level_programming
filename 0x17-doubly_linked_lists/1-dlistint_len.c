#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a,
 * linked dlistint_t list.
 * @h: point to  head of the list
 *
 * Return: num of elements
 */

size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
