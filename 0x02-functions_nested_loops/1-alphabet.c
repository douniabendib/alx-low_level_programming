#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase.
 *
 * return: Always 0
 */
void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
