#include "main.h"
/**
 * get_bit - function of a bit at an index in a decimal num
 * @n: number to search
 * @index: the bit value
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
