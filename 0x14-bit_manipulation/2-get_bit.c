#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * at a given index.
 * @index: index of the bit we want to get
 * @n: unsigned long int
 * Return: the value of bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 0;

	if (n == 0 && (1 << index) == 0)
		return (0);
	while (n)
	{
		if (index == j)
		{
			return (n & 1);
		}
		n = n / 2;
		j++;
	}
	return (-1);
}
