#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of
 * a listint_t list.
 * @head: header pointer
 * @n: int data type
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newheadnode;

	newheadnode = malloc(sizeof(listint_t));
	if (newheadnode == NULL)
		return (NULL);
	(*newheadnode).n = n;
	(*newheadnode).next = *head;
	*head = newheadnode;
	return (newheadnode);
}
