#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int j,k,cur;

	for (i = 7; i >= 0; i--)
	{
		j = i;
		cur = 1 << j;
		k = n&cur;
		k == 0?printf("0"):printf("1");
	}
}
