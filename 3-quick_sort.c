#include "sort.h"

/**
 * swap_int - Function that swaps the values of two integers.
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}

/**
 * l_partition - Lomuto partition scheme for quick sort algorithm
 * @array: The array to be sorted
 * @first: The first index
 * @last: The last index which is the pivot
 * @size: The size of the array
 * Return: int
 */
int l_partition(int *array, int first, int last, size_t size)
{
	int pivot = array[last];
	int x = (first - 1), i;

	for (i = first; i <= last; i++)
	{
		if (array[i] < pivot)
		{
			x++;
			if (x != i)
			{
				swap_int(&array[x], &array[i]);
				print_array(array, size);
			}
		}
	}
	if (array[x + 1] > pivot)
	{
		swap_int(&array[x + 1], &array[last]);
		print_array(array, size);
	}
	return (x + 1);
}

/**
 * _quicksort - function that does the quicksort recursion
 * @array: The array
 * @first: The first index
 * @last: The pivot
 * @size: The size
 * Return: void
 */
void _quicksort(int *array, int first, int last, size_t size)
{
	int position;

	if (first < last)
	{
		position = l_partition(array, first, last, size);
		_quicksort(array, first, position - 1, size);
		_quicksort(array, position + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers using Quick sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	_quicksort(array, 0, size - 1, size);
}
