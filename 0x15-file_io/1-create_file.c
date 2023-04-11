#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to the file
 *
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!(filename))
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	o = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}

