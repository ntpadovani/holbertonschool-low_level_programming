#include "lists.h"

/**
 * free_listint2 -A function that frees a listint_t list.
 * @head: Header pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp2 = *head;
	while (temp2 != NULL && head != NULL)
	{
		temp = temp2;
		temp2 = (*temp2).next;
		free(temp);
	}
	*head = NULL;
}
