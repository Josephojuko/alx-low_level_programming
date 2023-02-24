#include "main.h"

/**
 * _isupper - printing uppercase
 * @c: parameter
 * Return: 1 if uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
