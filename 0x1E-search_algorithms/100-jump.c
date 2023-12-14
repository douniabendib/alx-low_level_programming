#include "search_algos.h"
#include <math.h>
/**
 * jump_search- function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_size = (int) sqrt(size);
	int high_index = jump_size;
	int low_index = 0;
	int jump_count = 0;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (array && jump_count < (int) size / jump_size)
	{
		printf("Value checked array[%d] = [%d]\n", low_index, array[low_index]);
		if (value <= array[high_index])
		{
			printf("Value found between indexes [%d] and [%d]\n",
					low_index, high_index);
			for (i = low_index; i < high_index; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
				{
					return (i);
				}
			}
		}
		low_index += jump_size;
		high_index += jump_size;
		jump_count++;
	}
	return (-1);
}
