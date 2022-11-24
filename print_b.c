#include "main.h"

/**
  * print_b - function that prints an unsigned int
  * @b: unsigned int to print to binary
  * Return: number of printed digits
  */

int print_b(va_list b)
{
	unsigned int i, j = 2147483648, k = 1, sum = 0;
	unsigned int a[32];
	int counter = 0;

	i = va_arg(b, unsigned int);
	a[0] = i / j;

	for (; k < 32; k++)
	{
		j /= 2;
		a[k] = (i / j) % 2;
	}
	for (k = 0; k < 32; k++)
	{
		sum += a[k];
		if (sum || k == 31)
		{
			_putchar ('0' + a[k]);
			counter++;
		}
	}
	return (counter);
}
