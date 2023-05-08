#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;
	if (!(filename))
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (!(buffer))
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (o == -1 || r == -1 || w == -1 || r != w)
	{	
		free(buffer);
		return (0);
	}
	free (buffer);
	close(o);
	return (0);
}
