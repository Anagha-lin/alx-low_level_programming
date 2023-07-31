#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to add a new node.
 * Return: address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	head = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
