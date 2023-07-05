#include "lists.h"
/**
* print_listint - prints all tked list
* @j: linked list of typeint
* Return: numbers
*/
size_t print_listint(const listint_t *j)
{
	size_t numb = 0;

	while (j)
	{
		printf("%d\n", j->n);
		numb++;
		j = j->next;
	}
	return (numb);
}
