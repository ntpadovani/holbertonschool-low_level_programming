#include"lists.h"

/**
* add_node - A function that adds a new node
* at the beggining of a list.
*
* @head: Pointer to the first node.
* @str: Pointer the fisrt element of a node.
*
* Return:  the address of the new element,
* or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *newheadnode = malloc(sizeof(list_t));/*new blank node*/

	/*Checking the new node pointer for contents:validating*/
	if (newheadnode == NULL || str == NULL)
	{
		return (NULL);
	}

	/*
	*Asigning the new node pointer at the str
	*section a value.
	*/
	(*newheadnode).str = strdup(str);

	/*
	*Checking the new node pointer at the str
	*section for contents:validating.
	*/
	if ((*newheadnode).str == NULL)
	{
		return (NULL);
	}

	/*
	*Asigning the new node pointer at the len
	*section a value.
	*/
	(*newheadnode).len = _strlen((*newheadnode).str);
	(*newheadnode).next = *head;/*Pointing the new node to head node*/

	*head = newheadnode;/*Pointing the head node to the new node.*/
	return (newheadnode);
}
