#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: checked output
 *  @size: checked output
 *  @cmp: checked output
 *
 *  Return: return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
