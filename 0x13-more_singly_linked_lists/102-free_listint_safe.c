#include "lists.h"
/**
* free_listint_safe - frees t
* @j: pointer to the firsist
* Return: number of eleist
*/
size_t free_listint_safe(listint_t **j)
{
	size_t lent = 0;
	int diff;

	listint_t *temp;

	if (!j || !*j)
		return (0);
	while (*j)
	{
		diff = *j - (*j)->next;
		if (diff > 0)
		{
			temp = (*j)->next;
			free(*j);
			*j = temp;
			lent++;
		}
		else
		{
			free(*j);
			*j = NULL;
			lent++;
			break;
		}
	}
	*j = NULL;
	return (lent);
}
