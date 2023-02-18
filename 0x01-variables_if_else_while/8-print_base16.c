#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int M;
	char le;

	for (M = 0; M < 10 ; M++)
		putchar ((M % 10) + '0');
	for (le = 'a'; le <= 'f'; le++)
		putchar(le);
	putchar('\n');
	return (0);
}
