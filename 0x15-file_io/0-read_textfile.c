#include "main.h"
/**
 * read_textfile - function for read text from file
 * @filename : file name to be read
 * @letters :number of char want to read
 * Return : 0 if failed or number of char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	char *buffer = malloc(sizeof(char) * letters);
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}
	n = read(fileno(fp), buffer, letters);
	printf("%s", buffer);
	fclose(fp);
	free(buffer);
	return (n);
}
