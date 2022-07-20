#include "sort.h"

/**
 * swap - Swaps two integer pointers
 *
 * @xp: first integer pointer
 * @yp: second integer pointer
 *
 * Return: None
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - sorts an array by holding the righmost value
 * and swaping with the least value in the rest of the array.
 *
 * @array: Array of integer to be sorted
 * @size: size of @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	for (i = 0; i < (size - 1); i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
