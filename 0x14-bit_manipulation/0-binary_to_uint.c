#include "main.h"
/**
* binary_to_uint - converts a biint
* @b: umber
* Return: the number
*/
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int deci_valu = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		deci_valu = 2 * deci_valu + (b[j] - '0');
	}
	return (deci_valu);
}
