#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to be added
 *
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w, len = 0;

	if (!(filename))
		return (-1);
	if (!(text_content))
	{
		while (text_content[len])
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
