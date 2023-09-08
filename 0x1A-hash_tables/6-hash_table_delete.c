#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: A pointer to the hash table to delete.
 *
 * Description: This function frees the memory allocated for the
 *              hash table and all its key/value pairs.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_table_t *head = ht;
    hash_node_t *node, *tmp;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            node = ht->array[i];
            while (node != NULL)
            {
                tmp = node->next;
                free(node->key);
                free(node->value);
                free(node);
                node = tmp;
            }
        }
    }
    free(head->array);
    free(head);
}
