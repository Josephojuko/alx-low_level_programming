#include "main.h"
/**
* flip_bits - counts the numange
* @n: first
* @m: second
* Return: number ofchange
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counter = 0;
	unsigned long int curt;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curt = exclusive >> j;
		if (curt & 1)
			counter++;
	}
	return (counter);
}
