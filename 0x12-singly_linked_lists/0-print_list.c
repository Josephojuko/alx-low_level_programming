#include <stdio.h>
#include "lists.h"
/**
* prt_lit - prints all tof a linked list
* @h: point
* Return: the number ofd
*/
size_t prt_lit(const list_t *h)
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
