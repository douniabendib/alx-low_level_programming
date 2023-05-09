#include "main.h"
/**
 * create_file- function for creat file
 * @filename : name of file to be create
 * @text_content : pointer to write into file
 * Return: -1 of failed or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fp, n;
	size_t len;

	len = 0;
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		n = write(fp, text_content, len);
	}
	if (fp == -1 || n == -1)
		return (-1);
	close(fp);
	return (1);
}
