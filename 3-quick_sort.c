#include "sort.h"


/**
 * quick_sort - sorts an array of integers in ascending order using
 * @array: the list of values to be sorted
 * @size:  size of the list
*/
void quick_sort(int *array, size_t size)
{
	if (size == 0 || size == 1)
		return;
	quicksort_recursion(array, 0, size - 1, size);
}

/**
 * swap - swap two values
 * @x: first value
 * @y: second value
 */

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	 *y = tmp;
}

/**
 * quicksort_recursion - apply portion of the quicksort algorithm
 * @array: list to work on
 * @low: start point
 * @high: max at which we can traverse
 * @s: for displayint
*/

void quicksort_recursion(int array[], int low, int high, size_t s)
{

	if (low < high)
	{
		int pivot_index = partition(array, low, high, s);

		quicksort_recursion(array, low, pivot_index - 1, s);
		quicksort_recursion(array, pivot_index + 1, high, s);
	}
}
/**
 * partition - partitions the array pivot value and returns
 * @array: list for the values
 * @low: starting point
 * @high: -
 * Return: the index
* @s: for displayint
*/
int partition(int array[], int low, int high, size_t s)
{
	int pivot_value = array[high];
	int i = low, j;


	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}

	}
	swap(&array[i], &array[high]);
	print_array(array, s);
	return (i);
}
