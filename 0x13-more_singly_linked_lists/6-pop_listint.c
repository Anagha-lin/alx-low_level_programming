#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_member = *head;

	if (!first_member)
		return (0);

	data = (*head)->n;
	*head = first_member->next;
	free(first_member);
	return (data);
}
