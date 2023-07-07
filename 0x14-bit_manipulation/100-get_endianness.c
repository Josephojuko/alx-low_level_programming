#include "main.h"
/**
* get_endianness - checks if a n
* Return: 0 fg, 1 le
*/
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
