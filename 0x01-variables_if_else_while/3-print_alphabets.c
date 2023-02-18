#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cl;

	for (cl = 'a'; cl <= 'z'; cl++)
		putchar(cl);

	for (cl = 'A'; cl <= 'Z'; cl++)
		putchar(cl);
	putchar('\n');

	return (0);
}
