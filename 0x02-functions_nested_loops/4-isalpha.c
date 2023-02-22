#include "main.h"

/**
 * _isalpha - function that check for alpjhabet
 * @c: parameter to ber checked
 * Return: 1 if its an alphabet or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
