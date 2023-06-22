#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterato -Prints each array element on anew new line
 * @array: Array
 * @size:How many elem to print
 * @action: Pointer to print in regular or hexadecimal
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

