#include "main.h"

/**
 * flip_bits -function that need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a,b = 0;
	unsigned long int cur;
	unsigned long int e = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		cur = e >> a;
		if (cur & 1)
			b++;
	}
	return (b);
}
