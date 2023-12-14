#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 *  of integers using the Binary search algorithm
 *  @array: pointer to the first element of the array to search
 *  @size: the number of elements in array
 *  @value: the value to search for
 *  Return: -1 or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	left = 0;
	right = (int)(size - 1);
	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

