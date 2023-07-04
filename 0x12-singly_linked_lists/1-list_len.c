#include <stdlib.h>
#include "lists.h"
/**
* list_len - returns the numbn a linked list
* @j: poino the list_t list
* Return: number of elements in j
*/
size_t list_len(const list_t *j)
{
	size_t i = 0;

	while (j)
	{
		i++;
		j = j->next;
	}
	return (i);
}
