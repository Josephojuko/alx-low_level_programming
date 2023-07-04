#include <stdlib.h>
#include "lists.h"
/**
* freed_listed - frees  list
* @hed: list_t list freed
*/
void freed_listed(list_t *hed)
{
	list_t *temp;

	while (hed)
	{
		temp = hed->next;
		free(hed->str);
		free(hed);
		hed = temp;
	}
}
