#include <stdlib.h>
#include "lists.h"
/**
* lit_length - returns the numbn a linked list
* @j: poino the list_t list
* Return: number of elements in j
*/
size_t lit_length(const list_t *j)
{
	size_t i = 0;

	while (j)
	{
		i++;
		j = j->next;
	}
	return (i);
}
