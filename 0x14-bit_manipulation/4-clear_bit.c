#include "main.h"
/**
* clear_bit - sets the va 0
* @n: pointer to thege
* @index: ear
* Return: 1 for scess, -1 for fre
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
