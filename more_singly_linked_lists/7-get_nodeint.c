#include "lists.h"

/**
 * get_nodeint_at_index - get node at index function
 * @head: head of linkedlist
 * @index: index to get
 * Return: the nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int idx = 0;

	temp = head;
	for (idx = 0; idx < index && temp != NULL; idx++)
	{
		temp = (*temp).next;
	}

	if (idx != index)
	{
		return (NULL);
	}
	return (temp);
}
