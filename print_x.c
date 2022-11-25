#include "main.h"
#include <stdlib.h>

/**
 * print_x - prints an ascii char value in lowercase hexadecimal
 * @x: char to print
 *
 * Return: count of printed numbers
*/
int print_x(va_list x)
{
	unsigned int a[8];
	unsigned int n, j = 1, m = 268435456, sum = 0;
	char value;
	int counter = 0;

	n = va_arg(x, unsigned int);
	value = 'a' - ':';
	a[0] = n / m;
	for (; j < 8; j++)
	{
		m /= 16;
		a[j] = (n / m) % 16;
	}
	for (j = 0; j < 8; j++)
	{
		sum += a[j];
		if (sum || j == 7)
		{
			if (a[j] < 10)
				_putchar('0' + a[j]);
			else
				_putchar('0' + value + a[j]);
			counter++;
		}
	}
	return (counter);
}
