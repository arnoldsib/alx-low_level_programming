#include "main.h"


/**
 * print_alphabet - Make the alphabet
 * Return: void
 */

void print_alphabet_x10(void)

{

	char c;
	int i = 1;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
