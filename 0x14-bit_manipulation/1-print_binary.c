#include <stdio.h>
#include "stdio.h"

/**
 * print_binary - Print out the binary representation of an unsigned long int
 * @n: The unsigned long int to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	unsigned long int count;

	num = count = 0;
	if (n == 0)
		putchar('0');
	while (n > 0)
	{
		num = num << 1;
		num += n & 1;
		count++;
		n = n >> 1;
	}
	while (num > 0)
	{
		putchar((num & 1) + '0');
		num = num >> 1;
		count--;
	}
	if (count > 0)
	{
		while (count != 0)
		{
			putchar('0');
			count--;
		}
	}
}
