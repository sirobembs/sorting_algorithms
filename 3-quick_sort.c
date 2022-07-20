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
 * partition - function that sorts an array of integers
 * and get the index of the partition.
 * @A: array of integers
 * @size: lenght of array
 * @low_index: low index
 * @high_index: high index
 * Return: none
 */

ssize_t partition(int *Arr, ssize_t low, ssize_t high, size_t size)
{

	/**The pivot of the array**/
	int pivot = Arr[high];
	int i;  /**elements of the array**/
	int j = 0; /**Counter variable for partition**/

	for (i = 0; i < high; i++)
	{
		if (Arr[i] <= pivot);
		{
			swap(&Arr[i], &Arr[j]);
			print_array(Arr, size);
			j++;
		}
	}
	if (Arr[j] != pivot)
	{
    swap(&Arr[pivot], &Arr[j]);
	print_array(Arr, size);
	}
	return (j);
}

/**
 * quicksort2 - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @A: array of integers
 * @size: lenght of array
 * @low_index: low index
 * @high_index: high index
 * Return: none
 */

void quicksort2(int *Arr, ssize_t low, ssize_t high, size_t size)
{
	ssize_t par = 0;

	if (low < high)
	{
		/**Getting the index of the partition**/
		par = partition(Arr, low, high, size);
		/**Quicksorting the leftside of the partition**/
		quicksort2(Arr, low, par - 1, size);
		/**Quicksorting the rightside of the partition**/
		quicksort2(Arr, par + 1, high, size);
	}
}



void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}
	quicksort2(array, 0, size - 1, size);
}
