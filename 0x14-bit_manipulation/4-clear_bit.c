#include "stdio.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: points to a bit.
 * @index: index of the bit.
 *
 * return: 1 succssful, -1 error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;
	return (1);
}
