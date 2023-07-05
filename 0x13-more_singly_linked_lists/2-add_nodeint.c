#include "lists.h"
/**
* add_nodeint - adds a new node st 
* @head: pointer to list
* @i: data tonode
* Return: pointer tNULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int i)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->i = i;
	new->next = *head;
	*head = new;
	return (new);
}
