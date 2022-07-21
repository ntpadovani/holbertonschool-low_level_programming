#include"lists.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: ...
 * Return: returns the length of a string
 */

int _strlen(const char *s)
{
	int idx = 0;

	while (*s != '\0')
	{
		idx++;
		s++;
	}
	return (idx);
}


/**
 * add_node_end - A function that adds a new node
 * at the beggining of a list.
 *
 * @head: Pointer to the first node.
 * @str: Pointer the fisrt element of a node.
 *
 * Return:  the address of the new element,
 * or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newendnode = malloc(sizeof(list_t));/*new blank node*/
	list_t *temp = malloc(sizeof(list_t));/*new blank node*/

	/*Checking the new node pointer for contents:validating*/
	if (newendnode == NULL || str == NULL || temp == NULL)
	{
		free(newendnode);
		return (NULL);
	}

	/*
	 *Asigning the new node pointer at the str
	 *section, a value.
	 */
	(*newendnode).str = strdup(str);

	/*
	 *Checking the new node pointer at the str
	 *section for contents:validating.
	 */
	if ((*newendnode).str == NULL)
	{
		free(newendnode);
		return (NULL);
	}

	/*
	 *Asigning the new node pointer at the len
	 *section, a value.
	 */
	(*newendnode).len = _strlen((*newendnode).str);
	(*newendnode).next = NULL;/*Pointing the new node to endnode*/

	if (*head == NULL)
	{
		*head = newendnode;
	}
	else
	{
	temp = *head;
	while ((*temp).next != NULL)/*Run through the node list till last node*/
	{
		temp = (*temp).next;
	}

	(*temp).next = newendnode;/*Used to break the old link between the oldendnode*/
	}/*with NULL and point it to the newendnode*/
	return (newendnode);
}
