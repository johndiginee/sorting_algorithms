#include "sort.h"

/**
 * swap_ints - Swap 2 integers in an array.
 * @a: first integer to swap.
 * @b: econd integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

/**
 * bubble_sort - Function that sorts an array of ints.
 * @array: array of integers to sort.
 * @size: size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		length--;
	}
}

