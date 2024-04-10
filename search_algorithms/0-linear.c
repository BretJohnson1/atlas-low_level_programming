#include "search_algos.h"
/**
 *linear_search - search algorithm
 *@array: pointer to the head of the array
 *@Size: size of the array
 *@value: value being checked
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			{
				return (i);
			}
	}
		return (-1);
}
