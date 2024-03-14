#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump
 *             search algorithm
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located, or NULL if not
 *         found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, i;
    listint_t *current, *prev;

    if (!list || size == 0)
        return (NULL);

    jump = sqrt(size);
    prev = NULL;
    current = list;
    while (current && current->n < value)
    {
        prev = current;
        for (i = 0; current && i < jump; ++i)
            current = current->next;
        if (current)
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}

