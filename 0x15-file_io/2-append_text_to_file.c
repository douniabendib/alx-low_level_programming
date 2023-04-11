#include "main.h"
/**
 * append_text_to_file-appends text at the end of a file
 * @filename: pointer to name of file
 * @text_content: string to add
 * Return: -1 if fail failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int li, c, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	c = open(filename, O_WRONLY | O_APPEND);
	li = write(c, text_content, i);
	if (c == -1 || li == -1)
		return (-1);
	close(c);
	return (1);
}
