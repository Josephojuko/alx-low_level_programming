#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* added_noded - adds a nning
* @hed: double plist_t list
* @str: new string
* Return: the address of th it fails
*/
list_t *added_noded(list_t **hed, const char *str)
{
	list_t *new;
	unsigned int lern = 0;

	while (str[lern])
		lern++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->lern = lern;
	new->next = (*hed);
	(*hed) = new;
	return (*hed);
}
