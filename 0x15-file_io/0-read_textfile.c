#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: file
* @letters: number of letters it should read and print
*
* Return: number of letters read, 0 if failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (!(filename))
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!(buffer))
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (w == -1 || w != r)
		return (0);
	close(o);
	return (r);
}
