#include "main.h"

/**
  * set_bit - Sets the value of a bit to 1 at a given index
  * @n: The number to modify
  * @index: The index in the number to modify
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}

