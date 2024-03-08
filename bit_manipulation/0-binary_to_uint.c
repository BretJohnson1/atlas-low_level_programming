#include "main.h"
/**
 *binary_to_uint - converts binary to int
 *@b: checked output
 *
 *Return: always return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;
		if (*b == '1')
			result |= 1;
		b++;
	}
	return (result);
}
