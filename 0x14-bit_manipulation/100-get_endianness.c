#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian
 * 1 if little endian
 */
int get_endianness(void)
{
	int a = 1;
	char *j;

	j = (char *) &a;

	return ((int)*j);
}
