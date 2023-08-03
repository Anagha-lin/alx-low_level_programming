#include "stdio.h"

/**
 * binary_to_uint - converts a binary number to
 * unsigned int.
 * @b: binary number
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, binary;

	if (b == NULL)
		return (0);

	ui = 0;

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
			ui += binary;
		}
	}

	return (ui);
}
