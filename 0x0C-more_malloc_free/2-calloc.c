#include "stdio.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - does what calloc does but not really since we arent init ing it
 * @nmemb: elements
 * @size: size of arr
 *
 * Return: pointer to arr or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	while (i < (nmemb * size))
		a[i++] = 0;

	return (a);
}
