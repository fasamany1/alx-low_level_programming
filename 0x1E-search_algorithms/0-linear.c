#include "search_algos.h"

/**
 * linear_search - search for specific value within an array of integers
 * by checking each element of the array in sequence
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL) /* Check if array is NULL */
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i); /* Return the index where value is located */
		}
	}
	return (-1); /* Value not found */
}
