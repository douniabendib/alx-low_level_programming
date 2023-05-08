#include "main.h"
/**
 * read_textfile - function for read text from file
 * @filename : file name to be read
 * @letters :number of char want to read
 * Return: 0 if failed or number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buffer;
	ssize_t n;
	ssize_t m;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	n = read(fp, buffer, letters);
	m = write(STDOUT_FILENO, buffer, n);
	close(fp);
	free(buffer);
	return (m);
}
