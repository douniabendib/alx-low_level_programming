#include "main.h"
/**
 * print_binary - print binary number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int k;

	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			_putchar('1');
			j++;
		}
		else if (k)
		{
			_putchar('0');
		}
	}
	if (!j)
		_putchar('0');
}
