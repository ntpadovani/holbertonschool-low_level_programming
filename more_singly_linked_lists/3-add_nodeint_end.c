#include "lists.h"

/**
 * add_nodeint_end -A function that adds a new node at the end of a listint_t
 * @head: Header pointer
 * @n: Data int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newendnode;
	listint_t *tmp;

	newendnode = malloc(sizeof(listint_t));
	if (newendnode == NULL)
		return (NULL);
	(*newendnode).n = n;
	(*newendnode).next = NULL;
	if (*head == NULL)
		*head = newendnode;
	else
	{
		tmp = *head;
		while ((*tmp).next != NULL)
			tmp = (*tmp).next;
		(*tmp).next = newendnode;
	}
	return (newendnode);
}
