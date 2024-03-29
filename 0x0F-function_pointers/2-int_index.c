#include "function_pointers.h"
/**
 * int_index - Return index to place if comparison = true, else -1
 * @array: Array
 * @size: Size of the elements in array
 * @cmp: pointer to func of one of 3 in main
 * Return: NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}


