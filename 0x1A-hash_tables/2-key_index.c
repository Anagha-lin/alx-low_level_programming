#include "hash_tables.h"

/**
 * key_index - Obtain the index for a given key in a hash table array.
 * @key: Pointer to the key for which the index is calculated.
 * @size: Size of the hash table array.
 *
 * Description:
 * This function calculates the index at which the key/value pair should
 * be stored in the hash table array. It utilizes the hash_djb2 function.
 *
 * Return: The computed index for the given key within the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

