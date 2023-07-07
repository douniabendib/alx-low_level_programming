#include "main.h"
/**
 * binary_to_uint - function for convert binary to decimal number
 * @b: pointer to string of 1 and 0
 * Return: return to decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (a = 0; a[b]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal = 2 * decimal + (b[a] - '0');
	}
	return (decimal);
}
