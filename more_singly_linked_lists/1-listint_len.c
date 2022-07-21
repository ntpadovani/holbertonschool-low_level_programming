#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a linked
 * listint_t list.
 *
 * @h: header pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;

	while (h != NULL)
	{
		h = h->next;
		ctr++;
	}
	return (ctr);
}
