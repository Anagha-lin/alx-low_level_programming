#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 *             Jump search algorithm
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *current = list, *prev = NULL;
    size_t jump, i;

    if (list == NULL || size == 0)
        return (NULL);

    jump = sqrt(size);
    while (current && current->n < value)
    {
        prev = current;
        for (i = 0; current->next && i < jump; i++)
            current = current->next;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           prev ? prev->index : 0, current->index);

    current = prev ? prev : list;
    while (current && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
    }

    if (current && current->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        return (current);
    }

    return (NULL);
}

