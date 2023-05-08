#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffer_create(char *file);
void file_close(int fd);
/**
 * buffer_create - alloc 1024 bytes for buffer
 * @file: file buffer for storing
 *
 * Return: pointer to new buffer
 */
char *buffer_create(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!(buffer))
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * file_close - closes file descriptors.
 * @fd: file to be closed
 */
void file_close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - cp command
 * @ac: number of args
 * @av: args
 *
 * Return: 0 (success).
 */
int main(int ac, char **av)
{
	int src, dest, r, w;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = buffer_create(av[2]);
	src = open(av[1], O_RDONLY);
	r = read(src, buffer, 1024);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		r = read(src, buffer, 1024);
		dest = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	file_close(src);
	file_close(dest);
	return (0);
}
