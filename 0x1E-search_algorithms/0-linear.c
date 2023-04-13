#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: input array
 * @size: array size
 * @value: value to search in
 *
 * Return: EXIT_SUCCESS Always.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("value checked array[%u] = [%d]\n", array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
