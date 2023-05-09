#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function for appends text at end
 * @filename : name of file to be create
 * @text_content : pointer to write into file
 * Return: -1 of failed or 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, a;
	size_t len;

	len = 0;
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		a = write(fp, text_content, len);
	}
	if (fp == -1 || a == -1)
		return (-1);
	close(fp);
	return (1);
}
