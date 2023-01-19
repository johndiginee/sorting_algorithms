#include "sort.h"

/**
 * swap_ints - Swap 2 integers in an array
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_ints(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

/**
 * selection_sort - function that sorts using selection sort algorithm
 *
 * @array: array of integers
 * @size: size of the array
 *
 * Description: Prints the array after each swap
 */
void selection_sort(int *array, size_t size)
{
	int *minimum;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = array + i;
		for (j = i + 1; j < size; j++)
			minimum = (array[j] < *minimum) ? (array + j) : minimum;

		if ((array + i) != minimum)
		{
			swap_ints(array + i, minimum);
			print_array(array, size);
		}
	}
}