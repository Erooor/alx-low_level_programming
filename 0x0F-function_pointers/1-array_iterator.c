#include "function_pointers.h"

/**
 * array_iterator - set up an array by a function pointer
 * @array: array value
 * @size: size of the array
 * @action: function pointer
 *
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *way = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
