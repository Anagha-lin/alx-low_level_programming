#include "search_algos.h"
#include <stdio.h>
#include <math.h> /* For sqrt() */

/**
 * jump_search - Searches for a value in a sorted array of int
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t min, max;
	size_t i;

	if (array == NULL)
	return (-1);

	while (array[prev] < value && prev < size)
	{
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	prev += step;

	if (prev >= size)
	break;
	}

	min = (prev < size) ? prev - step : prev - step + 1;
	max = (prev < size) ? prev : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", min, max);

	for (i = min; i <= max; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return (i);
	}

	return (-1); /* Not found */
}

