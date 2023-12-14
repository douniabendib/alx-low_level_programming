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
	int jump = (int) sqrt(size);
	int high_index = jump;
	int low_index = 0;
	int jump_num = 0;
	int i;

	while (array && jump_num < (int) size / jump)
	{
		printf("Value checked array[%d] = [%d]\n", low_index, array[low_index]);
		if (value <= array[high_index])
		{
			printf("Value found between indexes [%d] and [%d]\n",
			array[low_index], array[high_index]);
			for (i = low_index; i < high_index; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		low_index += jump;
		high_index += jump;
		jump_num++;

	}
	return (-1);
}
