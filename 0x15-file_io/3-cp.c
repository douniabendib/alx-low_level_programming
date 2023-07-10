#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buff(char *f);
void close_file(int fl);
/**
 * create_buff - Allocates 1024 bytes for a buffer.
 * @f: the file buffer is storing chars
 * Return: A pointer to the allocated buffer.
 */
char *create_buff(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file descriptors.
 * @fl: The file descriptor to be closed.
 */
void close_file(int fl)
{
	int d;

	d = close(fl);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", fl);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description:Exit 97- If the argument count is incorrect
 * Exit 98- If file_from does not exist or cannot be read
 * Exit 99- If file_to cannot be created or written
 * Exit 100- If file_to or file_from cannot be closed
 */
int main(int ac, char *av[])
{
	int ffrom, fto, n, m;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buff(av[2]);
	ffrom = open(av[1], O_RDONLY);
	n = read(ffrom, buffer, 1024);
	fto = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (ffrom == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		m = write(fto, buffer, n);
		if (fto == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		n = read(ffrom, buffer, 1024);
		fto = open(av[2], O_WRONLY | O_APPEND);
	} while (n > 0);
	free(buffer);
	close_file(ffrom);
	close_file(fto);
	return (0);
}
