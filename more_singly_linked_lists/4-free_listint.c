#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 *
 * @head: Header pointer
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = (*head).next;
		free(tmp);
	}
}
