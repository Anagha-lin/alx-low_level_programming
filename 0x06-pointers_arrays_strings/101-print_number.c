#include "stdio.h"
#include <stdio.h>
/**
 * print_number - print an integer
 * @n: integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		if (n < -9)
			print_number(n / -10);
		putchar('0' - n % 10);
	}
	else
	{
		if (n > 9)
			print_number(n / 10);
		putchar(n % 10 + '0');
	}
}

