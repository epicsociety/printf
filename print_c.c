#include "main.h"

/**
 * print_c - prints a char
 * @c: character to print
 *
 * Return: 0 (success)
*/
int print_c(va_list c)
{
	char cc = (char)va_arg(c, int);

	_putchar(cc);
	return (0);
}
