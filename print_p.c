#include "main.h"

/**
 * print_p - prints the address
 * @p: the address to be printed
 *
 * Return: count of printed characters
*/
int print_p(va_list p)
{
	unsigned int a[16];
	unsigned int i = 0, sum = 0;
	unsigned long n, m = 1152921504606846976;
	int value, counter = 0;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			counter++;
		}
		return (counter);
	}

	_putchar('o');
	_putchar('x');
	counter = 2;

	a[0] = n / m;
	value = 'a' - ':';
	for (i = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + value + a[i]);
			counter++;
		}
	}
	return (counter);
}
