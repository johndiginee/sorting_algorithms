#include "sort.h"

/**
 * get_max_gap - gets the a largest Knuth Sequence gap for this size
 * @size: the size of the array
 *
 * Return: the gap size
 */
size_t get_max_gap(size_t size)
{
	size_t num;

	num = 1;
	while (num < size)
		num = num * 3 + 1;
	return ((num - 1) / 3);
}

/**
 * shell_sort - Sort an array of integers in ascending
 * @array: An integer array to sort
 * @size: The size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temporary;

	if (!array || !size)
		return;


	for (gap = get_max_gap(size); gap; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			temporary = array[i];
			for (j = i; j > gap - 1 && array[j - gap] > temporary; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temporary;
		}
		print_array(array, size);
	}
}