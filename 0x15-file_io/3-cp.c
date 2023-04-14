#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *creat_buffer(char *fl);
/**
 * creat_buffer - creat a buffer of 1024
 * @fl : file for storing char
 * Return: return value of buffer
 */
char *creat_buffer(char *fl)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error:Can't write to %s\n", fl);
		exit(99);
	}
	return (buffer);
}
void close_file(int fd);
/**
 * close_file - function for close file
 * @fd : file decriptor
 * Return : void return
 */
void close_file(int fd)
{
	int f;

	f = close(fd);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @av : is a pointer to array
 * @ac : paramter is a integer represent number of argument
 * Return: 0 always success
 */
int main(int ac, char **av)
{
	int rd, wt, to, from;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
		exit(97);
	}
	buffer = creat_buffer(av[2]);
	from = open(av[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	wt = write(to, buffer, rd);
	while (rd > 0)
	{
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error:Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error:Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		rd = read(from, buffer, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
