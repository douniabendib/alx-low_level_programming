#include "main.h"
#include <unistd.h>
/**
 * main - writes the character cto stdout.
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
