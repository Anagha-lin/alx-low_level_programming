#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array of int
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL)
	return (-1);

	while (bound < size && array[bound] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - Searches for a value in a sorted array of int
 * @array: Pointer to the first element of the array to search in
 * @low: Index of the low end of the array
 * @high: Index of the high end of the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	while (low <= high)
	{
	size_t mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
	printf("%d, ", array[i]);
	}
	printf("%d\n", array[high]);

	if (array[mid] == value)
	return (mid);
	else if (array[mid] < value)
	low = mid + 1;
	else
	high = mid - 1;
	}

	return (-1); /* Not found */
}

