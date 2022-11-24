#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: valid format specifier
 *
 * Return: pointer to a valid function or NULL
*/
int (*check_format(const char *format))(va_list)
{
	int i = 0;
	print_a p[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		/*{"x", print_x},*/
		/*{"S", print_S},*/
	};

	for (; p[i].a != NULL; i++)
	{
		if (*(p[i].a) == *format)
			break;
	}
	return (p[i].f);
}

/**
 * _printf - produces the output according to format
 * @format: a pointer, character string
 *
 * Return: the nummber of characters printed
*/
int _printf(const char *format, ...)
{
	va_list argp;
	unsigned int i = 0, counter = 0;
	int (*f)(va_list);

	if  (format == NULL)
		return (-1);

	va_start(argp, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = check_format(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(argp);
				continue;
			}
		}
		i++;
	}
	va_end(argp);
	return (counter);
}
