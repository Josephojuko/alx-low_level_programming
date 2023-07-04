#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* added_noded_ended - adds a new nodeinked list
* @hed: double list
* @str: string to  node
* Return: address of ailed
*/
list_t *added_noded_ended(list_t **hed, const char *str)
{
	list_t *new;
	list_t *temp = *hed;
	unsigned int lent = 0;

	while (str[lent])
		lent++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->lent = lent;
	new->next = NULL;
	if (*hed == NULL)
	{
		*hed = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
