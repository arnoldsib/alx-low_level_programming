#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, f;

	n = 612852475143;
	for (f = 2; f <= n; f++)
	{
		if (n % f == 0)
		{
			n /= f;
			f--;
		}
	}
	printf("%ld\n", f);
	return (0);
}
