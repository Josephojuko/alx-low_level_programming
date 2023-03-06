#include "main.h"

/**
 * _memset - filling a block of memory
 * @s: starting address
 * @b: the desired value
 * @n: number
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
