#include "main.h"

/**
 * print_sign - print the sign of number.
 * @n: the int to check.
 *Return:1 and print + if n greater than zero.
 *0 and print 0 if n equal zero.
 *-1 and prints -1 if n less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
