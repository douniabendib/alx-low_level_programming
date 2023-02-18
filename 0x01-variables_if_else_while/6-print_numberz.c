#include <stdio.h>

/**
 * main - prints single digits in base 10.
 *
 * Return: Alawys 0
 */
int main(void)
{
	int N;
	
	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');
	putchar('\n');
	return (0);
}
