#include <stdio.h>

/**
 * main - printing alphabet in lowercase
 * Return: always 0
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
