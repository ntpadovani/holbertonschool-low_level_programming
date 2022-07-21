#include "lists.h"

/**
 * print_listint - function that returns the
 * number of elements in a linked list_t list
 * @h: head of the linked list
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t ctr = 0;

	for (; h != NULL; ctr++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (ctr);
}
