#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: A pointer to the hash table to be printed.
 *
 * Return: No return value.
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *current_node;
    unsigned long int i = 0, printed_nodes = 0;

    if (ht == NULL)
        return;

    printf("{");

    for (i = printed_nodes; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            current_node = ht->array[i];
            while (current_node)
            {
                printf("%s'%s': '%s'", printed_nodes == 0 ? "" : ", ",
                       current_node->key, current_node->value), printed_nodes++;
                current_node = current_node->next;
            }
        }
    }

    printf("}\n");
}

