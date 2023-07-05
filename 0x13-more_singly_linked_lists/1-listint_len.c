#include "lists.h"
/**
* listint_len - returns the numbnked lists
* @j: linked list otraverse
* Return: numberes
*/
size_t listint_len(const listint_t *j)
{
	size_t numb = 0;

	while (j)
	{
		numbn++;
		j = j->next;
	}
	return (numb);
}
