#include "main.h"
/**
 * print_binary - prints the binnumber
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int curt;

	for (j = 63; j >= 0; j--)
	{
		curt = n >> j;
		if (curt & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
