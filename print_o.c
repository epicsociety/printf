#include "main.h"

/**
 * print_o - prints unsigned interger in octal notation
 * @o: unsigned int to print
 *
 * Return: count of printed digits
*/
int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int n, j = 1, m = 1073741824, sum = 0;
	int counter;

	n = va_arg(o, unsigned int);
	a[0] = n / m;
	for (; j < 11; j++)
	{
		m /= 8;
		a[j] = (n / m) % 8;
	}
	for (j = 0; j < 11; j++)
	{
		sum += a[j];
		if (sum || j == 10)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
