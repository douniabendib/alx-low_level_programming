#include "main.h"
/**
 * void - ptints all alphabets 10 time.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 10; i++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
	}
	_putchar('\n');
}
