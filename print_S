#include "main.h"
#include <stdlib.h>

/**
  * print_S - prints the string
  * @S: string to print
  * Return: number of printed strings
  */

int print_S(va_list S)
{
	unsigned int n = 0, counter = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (; str[n]; n++)
	{
		if (str[n] < 32 || str[n] >= 127)
		{
			_putchar('x');
			_putchar('\\');
			counter += 2;
			counter += print_x(S);
		}
		else
		{
			_putchar(str[n]);
			counter++;
		}
	}
	return (counter);
}
