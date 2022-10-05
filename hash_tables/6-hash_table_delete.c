#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	/* declarations */
	hash_node_t *location, *free_content;
	unsigned long int iterate;

	/* check to see if there is a table */
	if (!ht)
		return;
	/* iterate through and free everything*/
	for (iterate = 0; iterate < ht->size; iterate++)
	{
		location = ht->array[iterate];
		while (location)
		{
			/* free contents without losing our location */
			free_content = location;
			location = location->next;
			free(free_content->key);
			free(free_content->value);
			free(free_content);
			/*start over unless !location*/
		}
	}
	/*free the table*/
	free(ht->array);
	free(ht);
}
