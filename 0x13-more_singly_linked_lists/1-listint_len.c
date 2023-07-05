#include "lists.h"
/**
* listint_len - returns the numbnked lists
* @h: linked list otraverse
* Return: numberes
*/
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
