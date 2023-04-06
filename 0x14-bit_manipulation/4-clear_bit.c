#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0
 * at a given index
 * @index: index of the bit we want to set
 * @n: A pointer to unsigned long int
 * Return: the value 1 if it worked
 * or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	j = 1 << index;
	*n &= ~j;
	return (1);
}
