#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if endian is big, 1 if  endian is little
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
