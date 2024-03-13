#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recursive - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search
 * @low: The starting index in the array
 * @high: The ending index in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (high >= low)
	{
	mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
	if (i != low)
	printf(", ");
	printf("%d", array[i]);
	}
	printf("\n");

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
	return (mid);
	
	if (array[mid] >= value)
	return (advanced_binary_recursive(array, low, mid, value));

	return (advanced_binary_recursive(array, mid + 1, high, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

