#include "main.h"
/**
* create_file - file
* @filename: A pointer to create
* @text_content: A pofile
* Return: If the functio
*/
int create_file(const char *filename, char *text_content)
{
	int cod, j, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	cod = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(cod, text_content, len);
	if (cod == -1 || j == -1)
		return (-1);
	close(cod);
	return (1);
}
