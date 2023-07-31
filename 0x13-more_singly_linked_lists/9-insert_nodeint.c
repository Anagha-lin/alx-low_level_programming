#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *end_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int cont = 0;

	/* create node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	/* search of position to insert */
	index = idx - 1;
	while (end_node && cont != index)
	{
		cont++;
		end_node = end_node->next;
	}

	/* general case */
	if (cont == index && end_node)
	{
		new_node->next = end_node->next;
		end_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
