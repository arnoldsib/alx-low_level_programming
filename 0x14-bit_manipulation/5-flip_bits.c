#include "main.h"

/**
 * flip_bits - Function that returns the number of bits needed
 * to flip to get from one number to another
 * @n: the number.
 * @m: the nummber we want to filp n to
 * Return: flip_bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m, nbits = 0;


	while (j)
	{
		if (j & 1)
			nbits++;
		j >>= 1;
	}
	return (nbits);
}
