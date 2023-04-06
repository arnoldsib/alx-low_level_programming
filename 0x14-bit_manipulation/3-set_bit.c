#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1
 * at a given index.
 * @index: index of the bit we want to set
 * @n: A pointer to unisgned long int
 * Return: 1 if it worked
 * or -1 if an errot occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned k;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	k = 1 << index;
	*n = (*n | k);
	return (1);
}
