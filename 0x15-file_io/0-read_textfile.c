#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints
 * @filename : text file
 * @letters: number of letters
 * Return:0 when function fails to open or file is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t rd, wt, fp;

	fp = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		printf("Error opening file");
		return (0);
	}
	if (buffer == NULL)
		return (0);
	rd = read(fp, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);
		if (fp == -1 || rd == -1 || wt == -1 || rd != wt)
		{
			printf("Failed to read file");
			return (0);
		}
	free(buffer);
	close(fp);
	return (wt);
}
