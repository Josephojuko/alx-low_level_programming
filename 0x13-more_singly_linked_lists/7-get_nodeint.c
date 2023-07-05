#include "lists.h"
/**
* get_nodeint_at_index - returns the ninked list
* @head: first nodest
* @index: fjgdfjngdjfjkwefurn
* Return: pointer to the node we', or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}
