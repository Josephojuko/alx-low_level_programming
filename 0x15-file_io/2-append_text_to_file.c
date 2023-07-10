#include "main.h"
/**
* append_text_to_file - Appends text file
* @filename: A pointfile
* @text_content: The string to add tofile
* Return: If the function fails or
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int u, j, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	u = open(filename, O_WRONLY | O_APPEND);
	j = write(u, text_content, len);
	if (u == -1 || j == -1)
		return (-1);
	close(u);
	return (1);
}
