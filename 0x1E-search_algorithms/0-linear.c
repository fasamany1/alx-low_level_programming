#include "search_algos.h"

/**
 * linear_search: search for specific value within an array 
 * by checking each element of the array in sequence
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {  // Check if array is NULL
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        printf("Comparing array[%ld] = %d with value %d\n", i, array[i], value);
        if (array[i] == value) {
            return i;  // Return the index where value is located
          }
    }
  return -1;  // Value not found
}
