#ifndef _LISTS_H
#define _LISTS_H


/*Libraries used for the project*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/*
* All singly list project prototypes
* from here on below
*/

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlength(const char *s);

#endif
