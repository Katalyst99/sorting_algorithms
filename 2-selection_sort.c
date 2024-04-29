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
 * selection_sort - sorts an array of integers using selection sort
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, min_element;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min_element = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min_element])
				min_element = y;
		}
		if (min_element != x)
		{
			swap_int(&array[x], &array[min_element]);
			print_array(array, size);
		}
	}
}
