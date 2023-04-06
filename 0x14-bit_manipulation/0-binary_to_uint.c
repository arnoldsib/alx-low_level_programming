#include "main.h"

/**
 * binary_to_uint - Functions that converts binary to int.
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int k = 0, m;
	unsigned int i = 0;

	if (b[k] == '\0')
	{
		return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
		;
	k--, m = 1;
	for (; k >= 0; k--, m *= 2)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		if (b[k] & 1)
			i += m;
	}

	return (i);
}
