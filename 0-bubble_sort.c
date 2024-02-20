#include "sort.h"

/**
 * bubble_sort - Use bubble sort method to sort an array
 *
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	int tmp;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < (size - x - 1); y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
