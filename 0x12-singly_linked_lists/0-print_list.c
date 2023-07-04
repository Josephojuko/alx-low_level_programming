#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all tof a linked list
* @j: point
* Return: the number ofd
*/
size_t print_list(const list_t *j)
{
	size_t s = 0;

	while (j)
	{
		if (!j->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", j->len, j->str);
		j = j->next;
		s++;
	}
	return (s);
}
