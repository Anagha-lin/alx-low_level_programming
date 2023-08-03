#include "stdio.h"

/**
 * binary_to_unit - converts a binary to an
 * unsigned int.
 * @b: binary number.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int len, binary;

	if (b == NULL)
		return (0);

	u = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			u += binary;
		}
	}

	return (u);
}
