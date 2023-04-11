#include "main.h"

/**
 * create_file - create a file
 * @filename :pointer to the name of file
 * @text_content: pointer to string file
 * Return: -1 if the file fail
 */
int create_file(const char *filename, char *text_content)
{
	int fp , c , i;
	
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(fp, text_content, i);
	if (fp == -1 || c == -1)
		return (-1);
	close(fp);
	return (-1);
}
