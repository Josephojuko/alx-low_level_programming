#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* looped_listint_len - Counts the number oes
* @head: A pointer to the o check.
* Return: If the lied - 0.
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tore, *hare;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tore = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tore == hare)
		{
			tore = head;
			while (tore != hare)
			{
				node++;
				tore = tore->next;
				hare = hare->next;
			}
			tore = tore->next;
			while (tore != hare)
			{
				node++;
				tore = tore->next;
			}
			return (node);
		}
		tore = tore->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
* print_listint_safe - Prints a listely
* @head: A pointer to thtint_t list.
* Return: The number of nodet
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node, inde = 0;

	node = looped_listint_len(head);
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (inde = 0; inde < node; inde++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
