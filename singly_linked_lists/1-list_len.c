#include "lists.h"


/**
* list_len - A function that prints the number of elements
* in a linked list.
*
*@h:A pointer that points to the first element in the list.
*
*Return: How many elements are in the list.
*/


size_t list_len(const list_t *h)
{
size_t ctr;

	for (ctr = 1; h != NULL; ctr++)
	{
		h = h->next;
		ctr++;
	}
	return (ctr);
}
