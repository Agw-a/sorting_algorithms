#include "sort.h"

/**
 * swapValues-swap two integers in array
 * @n:first integer
 * @i:second integer
 *
 * Description-function to perform swap on integers
 */
void swapValues(int *n, int *i)
{
	int tmp;

	tmp = *n;
	*n = *i;
	*i = tmp;

}

/**
 * bubble_sort-function that sorts an
 * array of integers in ascending order
 * @array: array of integers
 * @size:size of array
 *
 * Description-Print array aftre each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, compIdx;
	int checkSwap = 1;

	if (!array)
		return;
	while (checkSwap != 0)
	{
		checkSwap = 0;

		for (idx = 0; idx < size - 1; ++idx)
		{
			swapValues(array[compIdx], array[compIdx + 1]);
			print_array(array, size);
		}
		idx++;
		if (checkSwap == 0)
			break;
	}
}
