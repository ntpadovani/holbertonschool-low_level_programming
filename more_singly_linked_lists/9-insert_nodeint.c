#include "lists.h"
/**
 * insert_nodeint_at_index -A function that
 * inserts a new node at given position.
 * @head: head of the node
 * @index: Index where to place node.
 * @n: Data for the node.
 * Return: The address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int idx2;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = NULL;
	temp = *head;
	if (*head == NULL && index > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (index == 0)
	{
		(*new_node).next = *head;
		*head = new_node;
		return (new_node);
	}
	for (idx2 = 0; idx2 < index - 1; idx2++)
	{
		temp = (*temp).next;
		if (temp == NULL && index - idx2 > 0)
		{
			free(new_node);
			return (NULL);
		}
	}
	(*new_node).next = (*temp).next;
	(*temp).next = new_node;
	return (new_node);
}
