#include "main.h"
/**
* set_bit - sets a bit to 1
* @n: pointer tnge
* @index: index of thto 1
* Return: 1 for sss, -1 for fai
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
