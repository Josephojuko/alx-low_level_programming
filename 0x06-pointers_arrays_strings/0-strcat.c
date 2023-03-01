#include "main.h"

/**
 * _strncat - concateneating two strings
 * @dest: parameter
 * @src: inpur
 * @n: final
 * Return: a character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; str1[i] != '\0'; i++)
		for (j = 0; str2[j] != '\0'; j++)
		{
			str1[i + j] = str2[j];
		}
	str1[i + j] = '\0';
}
