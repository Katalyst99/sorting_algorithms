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
 * bubble_sort - sorts an array of integers using bubble sort.
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, i;

	if (array == NULL || size < 2)
		return;

	i = 0;
	while (i < size)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n + 1] < array[n])
			{
				swap_int(&array[n + 1], &array[n]);
				print_array(array, size);
			}
		}
		i++;
	}
}
