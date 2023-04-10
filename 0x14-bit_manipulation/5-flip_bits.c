#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to
 *  flip to get from one number to another
 *  @n :number one
 *  @m : number two
 *  Return : number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int k;

	for (i = 63; i >= 0; i--)
	{
		k = (n ^ m) >> i;
		if (k & 1)
			j++;
	}
	return (j);
}
