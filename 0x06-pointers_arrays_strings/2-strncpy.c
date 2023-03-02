#include "main.h"

/**
 * _strncpy - copying strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: strimng
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
