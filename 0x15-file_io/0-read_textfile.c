#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints
 * @filename : text file
 * @letters: number of letters
 * Return:0 when function fails to open or file is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t fp, ecr, li;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	li = read(fp, c, letters);
	ecr = write(STDOUT_FILENO, c, li);
	free(c);
	close(fp);
	return (ecr);
}
