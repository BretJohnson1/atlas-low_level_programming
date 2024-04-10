#include "search_algos.h"
/**
* linear_search - search algorithm
*@array: pointer to the head of thea array
*@size: size of the array
*@value: value being searched
*/
int linear_serach(int *array, size_t size, int value)
{
    size_t i;
    
    if (array == NULL)
    {
        return (-1);
    }

    for (i = 0; i < size; i++)
    {
        printf("Comparing %d\n", array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}