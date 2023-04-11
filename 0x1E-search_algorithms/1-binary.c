#include "search_algos.h"

/**
 * binary_search - searches for a specific value within a
 * sorted array of integers by dividing the array in half
 * and checking if the value is in the left or right half
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 * Description: Prints the [sub]array being searched after each change.
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{  /* Check if array is NULL */
		return (-1);
	}
	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}
	return (-1);  /* Value not found */
}
