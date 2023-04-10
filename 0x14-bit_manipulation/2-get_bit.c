#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n : number
 * @index: index of a bit
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
