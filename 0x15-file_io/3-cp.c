#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
* create_buffer - Allocatesr
* @file: The name of the
* Return: A pointer to the newuffer
*/
char *create_buffer(char *file)
{
	char *buer;

	buer = malloc(sizeof(char) * 1024);
	if (buer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buer);
}
/**
* close_file - Closes ftors
* @fd: The file descriptolosed
*/
void close_file(int fd)
{
	int d;

	d = close(fd);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* main - Copies t
* @argc: The ber of arguments sprogram
* @argv: An array of pointers argents
* Return: 0 on suc
* Description: If the argumenorrect - exit code 97.
* If file_from does not e read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	int frm, to, s, x;
	char *buer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buer = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	s = read(frm, buer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (frm == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buer);
			exit(98);
		}
		x = write(to, buer, s);
		if (to == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buer);
			exit(99);
		}
		s = read(frm, buer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (s > 0);
	free(buer);
	close_file(frm);
	close_file(to);
	return (0);
}
