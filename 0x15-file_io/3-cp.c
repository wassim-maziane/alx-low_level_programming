#include "main.h"
/**
* main - entry point
* @argc: number of arguments
* @argv: string of arguments
*
* Return: exit status
*/
int main(int argc, char **argv)
{
	int o, r, o2, w, c;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (!(buffer))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	o = open(argv[1], O_RDONLY);
	o2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do
	{
		r = read(o, buffer, 1024);
		if (o == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(o2, buffer, r);
		if (o2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		o2 = open(argv[2], O_WRONLY | O_APPEND);
	} while(r > 0);
	free(buffer);
	c = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o);
		exit(100);
	}
	c = close(o2);
	if (c == - 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o2);
		exit(100);
	}
	return (0);
}
