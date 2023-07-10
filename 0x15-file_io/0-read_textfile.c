#include "main.h"
#include <stdlib.h>
/**
* read_textfile - text fiTDOUT
* @filename: text read
* @letters: numberead
* Return: w- actual number rinted
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t cod;
	ssize_t j;
	ssize_t i;

	cod = open(filename, O_RDONLY);
	if (cod == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	i = read(cod, bf, letters);
	j = write(STDOUT_FILENO, bf, i);
	free(bf);
	close(cod);
	return (j);
}
