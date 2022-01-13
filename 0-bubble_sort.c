#include "sort.h"

/**
 * bubble_sort - sorts a doubly linked list of integers
 *
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
