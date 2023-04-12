#include "search_algos.h"

/**
 * _binary_search - searches for a specific value within a
 * sorted array of integers by dividing the array in half
 * and checking if the value is in the left or right half
 * @array: pointer to first element of array to seach
 * @left: starting index of array
 * @right: ending index of array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 * Description: Prints the [sub]array being searched after each change.
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - find a range where the element to be searched
 * is present and then performing a binary search in that range
 * to find the element. The algorithm uses powers of two as exponential
 * ranges to search in the array.
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
