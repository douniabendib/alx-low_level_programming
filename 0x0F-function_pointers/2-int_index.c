#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index- returns the index of the first element does not return 0
 * @array: array
 * @size: how many element to array
 * @cmp: pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
